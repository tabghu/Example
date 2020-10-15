#include "WorkerManager.h"
#include "Boss.h"
#include "Employee.h"
#include "Manager.h"
#include <iostream>
#include <string>
using namespace std;

//构造函数
WorkerManager::WorkerManager()
{

	//初始化职工人数
	this->m_EmpNum = 0;
	//初始化数组指针
	this->m_EmpArray = NULL;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//文件不存在情况
	if (!ifs.is_open())
	{
		cout << "文件不存在情况" << endl;	//测试输出
		//由于文件都不存在 所以需要执行初始化操作
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件已存在，但内容为空" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	this->m_EmpNum = this->get_EmpNum();
	//cout << "职工个数为" << m_EmpNum <<  endl;
	//根据职工创建数组
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	Init_Emp();
	//测试代码
	/*for (int i = 0; i < m_EmpNum; i++)
	{
		cout << "\t职工号: " << this->m_EmpArray[i]->m_Id
			<< "\t职工姓名：" << this->m_EmpArray[i]->m_Name
			<< "\t部门编号：" << this->m_EmpArray[i]->m_DeptId << endl;
	}*/
}

//显示菜单
void WorkerManager::ShowMenu()
{
	cout << "---------------------------------------------" << endl;
	cout << "--------------欢迎进入职工管理系统------------" << endl;
	cout << "----------------0.退出管理系统----------------" << endl;
	cout << "----------------1.增加职工信息----------------" << endl;
	cout << "----------------2.显示职工信息----------------" << endl;
	cout << "----------------3.删除离职职工----------------" << endl;
	cout << "----------------4.修改职工信息----------------" << endl;
	cout << "----------------5.查找职工信息----------------" << endl;
	cout << "----------------6.按照编号排序----------------" << endl;
	cout << "----------------7.清空所有文档----------------" << endl;
	cout << "----------------------------------------------" << endl;
	cout << endl;
}
//退出系统
void WorkerManager::Exit_Sys()
{
	cout << "欢迎下次使用" << endl;
	exit(0);
}
//添加职工信息
void WorkerManager::Add_Employ()
{
	//***********添加职员逻辑整理
	//我们要实现批量添加功能, 所以要先接收一个新数，从而申请新的内存空间
	//然后要重新拷贝数组, 开辟新数组，要将原数组逐一拷贝到新数组

	int addNum = 0;
	cout << "请输入增加职工的数量" << endl;
	cin >> addNum;
	//由于在此处使用的是数组的存储结构，所以我们要没经过过一次添加数据
	//我们都需要将数据进行一次拷贝，拷贝的新数组大小为当前数组大小m_EmpNum+addNum
	if (addNum > 0)
	{
		//开辟新的数组空间用来容纳
		int newSize = this->m_EmpNum + addNum;
		Worker** newSpace = new Worker * [newSize];
		//然后进行拷贝操作
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = m_EmpArray[i];
			}
		}

		//当前数组中已经有了我们之前数组中的值，我们现在要进行添加新值操作
		for (int i = 0; i < addNum; i++)
		{
			int  id;
			string name;
			int dSelect;
			cout << "请输入第" << i + 1 << "个新职工编号" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "个新职工姓名" << endl;
			cin >> name;


			cout << "请输入第" << i + 1 << "个新职工职位" << endl;
			cout << "请选择职工职位" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.总裁" << endl;
			cin >> dSelect;


			//new对象添加进数组
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:		//普通职工
				worker = new Employee(id, name, dSelect);
				break;
			case 2:
				worker = new Manager(id, name, dSelect);
				break;
			case 3:
				worker = new Boss(id, name, dSelect);
				break;
			default:
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;
		}

		//我们所申请的是一个临时空间， 并且是堆内存，所以在使用结束后要释放掉
		delete[]this->m_EmpArray;
		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;
		cout << "添加成员信息成功,已成功添加"<< addNum << "名员工" << endl;
		this->save();
	}
	else
	{
		cout << "输入有误" << endl;
	}
	system("pause");
	system("cls");
	
	
}
//显示职工信息
void WorkerManager::Display_Employ()
{

	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}
//删除职工信息
void WorkerManager::Del_Employ()
{

	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	//按职工编号删除
	cout << "请输入想删除的的职工编号" << endl;
	int id = 0;
	cin >> id;
	int index = IsExist(id);
	if (index == -1)
	{
		cout << "此纪录不存在" << endl;
	}
	else
	{
		for (int i = index; i < m_EmpNum - 1; i++)
		{
			this->m_EmpArray[i] = this->m_EmpArray[i + 1];
		}
		this->m_EmpNum--;
		this->save();
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}
//修改职工信息
void WorkerManager::Updata_Employ()
{

	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		cout << "请输入修改职工编号： " << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//说明查找到位置，进行修改
			//但由于这里并不是普通的一级数组，数组中每个指针对象都属于不同的子类
			//如果只是进行简单的覆盖处理，那么有可能会发生我们所要存储的对象指针
			//与我们之前指针不同的情况
			//所以要先将这一块内存指向空，然后才能进行新的赋值操作
			delete this->m_EmpArray[ret];
			int id;
			string name;
			int dId;

			cout << "请输入新职工编号" << endl;
			cin >> id;

			cout << "请输入新职工姓名" << endl;
			cin >> name;

			cout << "请选择职工职位" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.总裁" << endl;
			cin >> dId;


			Worker* worker = NULL;
			switch (dId)
			{
			case 1:		//普通职工
				worker = new Employee(id, name, dId);
				break;
			case 2:
				worker = new Manager(id, name, dId);
				break;
			case 3:
				worker = new Boss(id, name, dId);
				break;
			default:
				break;
			}
			this->m_EmpArray[ret] = worker;
			cout << "修改成功" << endl;
			//保存到文件中
			this->save();
		}
		else
		{
			cout << "修改失败，查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}
//查找职工信息、
void WorkerManager::Search_Employ()
{

	cout << "请输入想要查找的员工编号" << endl;
	int id;
	cin >> id;
	int ret = IsExist(id);
	if (ret != -1)
	{
		//说明我们已经查找到了这个人
		//打印该人信息
		cout << "您所查找的员工信息为" << endl;
		this->m_EmpArray[ret]->showInfo();
	}
	else
	{
		cout << "查找失败，请核验信息" << endl;
	}
	system("pause");
	system("cls");
}
//按照编号排序
void WorkerManager::Sort_Employ()
{

	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	cout << "请选择排序方式： " << endl;
	cout << "1. 按照员工编号升序排列" << endl;
	cout << "2. 按照员工编号降序排列" << endl;

	int select = 0;
	cin >> select;
	for (int i = 0; i < m_EmpNum; i++)
	{
		int minOrmax = i;
		//升序排列
		if (select == 1)
		{
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (m_EmpArray[minOrmax]->m_Id > m_EmpArray[j]->m_Id)
				{
					minOrmax = j;
				}
			}
		}
		else if (select == 2)
		{
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (m_EmpArray[minOrmax]->m_Id < m_EmpArray[j]->m_Id)
				{
					minOrmax = j;
				}
			}
		}
		else
		{
			cout << "输入有误" << endl;
		}

		if (minOrmax != i)
		{
			Worker* temp = m_EmpArray[minOrmax];
			m_EmpArray[minOrmax] = m_EmpArray[i];
			m_EmpArray[i] = temp;
		}
	}
	cout << "排序成功" << endl;
	this->save();
	this->Display_Employ();
}
//清空所有文档
void WorkerManager::Clear_All()
{

	cout << "你确定要选择清空文档吗？" << endl;
	cout << "1. 确定" << endl;
	cout << "2. 返回" << endl;
	int select = 0;
	cin >> select;
	if (select == 2)
	{
		system("pause");
		system("cls");
	}
	else
	{
		//删除文件
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		//释放所有对象
		for (int i = 0; i < m_EmpNum; i++)
		{
			if (m_EmpArray[i] != NULL)
			{
				delete m_EmpArray[i];
			}
		}
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		delete []m_EmpArray;
		m_EmpArray = NULL;
		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");
}
//文件交互 写文件
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << m_EmpArray[i]->m_Id << " "
			<< m_EmpArray[i]->m_Name << " "
			<< m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}
//统计人数
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	return num;
}

//初始化数组，要将文件中的数据输出到显示器上
void WorkerManager::Init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;
		//根据读到的不同的dId来对数据进行处理，来创建不同对象
		if(dId == 1)	//普通员工
		{
			worker = new Employee(id, name, dId);
		}
		if (dId == 2)	//经理
		{
			worker = new Manager(id, name, dId);
		}
		if (dId == 3)	//总裁
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
}

//判断此员工是否存在
int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
		}
	}
	return index;
}
//析构函数
WorkerManager::~WorkerManager()
{

	if (m_EmpArray != NULL)
	{
		delete[]m_EmpArray;
		m_EmpArray = NULL;
	}
}