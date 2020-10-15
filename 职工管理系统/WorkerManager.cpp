#include "WorkerManager.h"
#include "Boss.h"
#include "Employee.h"
#include "Manager.h"
#include <iostream>
#include <string>
using namespace std;

//���캯��
WorkerManager::WorkerManager()
{

	//��ʼ��ְ������
	this->m_EmpNum = 0;
	//��ʼ������ָ��
	this->m_EmpArray = NULL;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//�ļ����������
	if (!ifs.is_open())
	{
		cout << "�ļ����������" << endl;	//�������
		//�����ļ��������� ������Ҫִ�г�ʼ������
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
		cout << "�ļ��Ѵ��ڣ�������Ϊ��" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	this->m_EmpNum = this->get_EmpNum();
	//cout << "ְ������Ϊ" << m_EmpNum <<  endl;
	//����ְ����������
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	Init_Emp();
	//���Դ���
	/*for (int i = 0; i < m_EmpNum; i++)
	{
		cout << "\tְ����: " << this->m_EmpArray[i]->m_Id
			<< "\tְ��������" << this->m_EmpArray[i]->m_Name
			<< "\t���ű�ţ�" << this->m_EmpArray[i]->m_DeptId << endl;
	}*/
}

//��ʾ�˵�
void WorkerManager::ShowMenu()
{
	cout << "---------------------------------------------" << endl;
	cout << "--------------��ӭ����ְ������ϵͳ------------" << endl;
	cout << "----------------0.�˳�����ϵͳ----------------" << endl;
	cout << "----------------1.����ְ����Ϣ----------------" << endl;
	cout << "----------------2.��ʾְ����Ϣ----------------" << endl;
	cout << "----------------3.ɾ����ְְ��----------------" << endl;
	cout << "----------------4.�޸�ְ����Ϣ----------------" << endl;
	cout << "----------------5.����ְ����Ϣ----------------" << endl;
	cout << "----------------6.���ձ������----------------" << endl;
	cout << "----------------7.��������ĵ�----------------" << endl;
	cout << "----------------------------------------------" << endl;
	cout << endl;
}
//�˳�ϵͳ
void WorkerManager::Exit_Sys()
{
	cout << "��ӭ�´�ʹ��" << endl;
	exit(0);
}
//���ְ����Ϣ
void WorkerManager::Add_Employ()
{
	//***********���ְԱ�߼�����
	//����Ҫʵ��������ӹ���, ����Ҫ�Ƚ���һ���������Ӷ������µ��ڴ�ռ�
	//Ȼ��Ҫ���¿�������, ���������飬Ҫ��ԭ������һ������������

	int addNum = 0;
	cout << "����������ְ��������" << endl;
	cin >> addNum;
	//�����ڴ˴�ʹ�õ�������Ĵ洢�ṹ����������Ҫû������һ���������
	//���Ƕ���Ҫ�����ݽ���һ�ο������������������СΪ��ǰ�����Сm_EmpNum+addNum
	if (addNum > 0)
	{
		//�����µ�����ռ���������
		int newSize = this->m_EmpNum + addNum;
		Worker** newSpace = new Worker * [newSize];
		//Ȼ����п�������
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = m_EmpArray[i];
			}
		}

		//��ǰ�������Ѿ���������֮ǰ�����е�ֵ����������Ҫ���������ֵ����
		for (int i = 0; i < addNum; i++)
		{
			int  id;
			string name;
			int dSelect;
			cout << "�������" << i + 1 << "����ְ�����" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "����ְ������" << endl;
			cin >> name;


			cout << "�������" << i + 1 << "����ְ��ְλ" << endl;
			cout << "��ѡ��ְ��ְλ" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ܲ�" << endl;
			cin >> dSelect;


			//new������ӽ�����
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:		//��ְͨ��
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

		//�������������һ����ʱ�ռ䣬 �����Ƕ��ڴ棬������ʹ�ý�����Ҫ�ͷŵ�
		delete[]this->m_EmpArray;
		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;
		cout << "��ӳ�Ա��Ϣ�ɹ�,�ѳɹ����"<< addNum << "��Ա��" << endl;
		this->save();
	}
	else
	{
		cout << "��������" << endl;
	}
	system("pause");
	system("cls");
	
	
}
//��ʾְ����Ϣ
void WorkerManager::Display_Employ()
{

	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
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
//ɾ��ְ����Ϣ
void WorkerManager::Del_Employ()
{

	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	//��ְ�����ɾ��
	cout << "��������ɾ���ĵ�ְ�����" << endl;
	int id = 0;
	cin >> id;
	int index = IsExist(id);
	if (index == -1)
	{
		cout << "�˼�¼������" << endl;
	}
	else
	{
		for (int i = index; i < m_EmpNum - 1; i++)
		{
			this->m_EmpArray[i] = this->m_EmpArray[i + 1];
		}
		this->m_EmpNum--;
		this->save();
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}
//�޸�ְ����Ϣ
void WorkerManager::Updata_Employ()
{

	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		cout << "�������޸�ְ����ţ� " << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//˵�����ҵ�λ�ã������޸�
			//���������ﲢ������ͨ��һ�����飬������ÿ��ָ��������ڲ�ͬ������
			//���ֻ�ǽ��м򵥵ĸ��Ǵ�����ô�п��ܻᷢ��������Ҫ�洢�Ķ���ָ��
			//������֮ǰָ�벻ͬ�����
			//����Ҫ�Ƚ���һ���ڴ�ָ��գ�Ȼ����ܽ����µĸ�ֵ����
			delete this->m_EmpArray[ret];
			int id;
			string name;
			int dId;

			cout << "��������ְ�����" << endl;
			cin >> id;

			cout << "��������ְ������" << endl;
			cin >> name;

			cout << "��ѡ��ְ��ְλ" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ܲ�" << endl;
			cin >> dId;


			Worker* worker = NULL;
			switch (dId)
			{
			case 1:		//��ְͨ��
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
			cout << "�޸ĳɹ�" << endl;
			//���浽�ļ���
			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}
	system("pause");
	system("cls");
}
//����ְ����Ϣ��
void WorkerManager::Search_Employ()
{

	cout << "��������Ҫ���ҵ�Ա�����" << endl;
	int id;
	cin >> id;
	int ret = IsExist(id);
	if (ret != -1)
	{
		//˵�������Ѿ����ҵ��������
		//��ӡ������Ϣ
		cout << "�������ҵ�Ա����ϢΪ" << endl;
		this->m_EmpArray[ret]->showInfo();
	}
	else
	{
		cout << "����ʧ�ܣ��������Ϣ" << endl;
	}
	system("pause");
	system("cls");
}
//���ձ������
void WorkerManager::Sort_Employ()
{

	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	cout << "��ѡ������ʽ�� " << endl;
	cout << "1. ����Ա�������������" << endl;
	cout << "2. ����Ա����Ž�������" << endl;

	int select = 0;
	cin >> select;
	for (int i = 0; i < m_EmpNum; i++)
	{
		int minOrmax = i;
		//��������
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
			cout << "��������" << endl;
		}

		if (minOrmax != i)
		{
			Worker* temp = m_EmpArray[minOrmax];
			m_EmpArray[minOrmax] = m_EmpArray[i];
			m_EmpArray[i] = temp;
		}
	}
	cout << "����ɹ�" << endl;
	this->save();
	this->Display_Employ();
}
//��������ĵ�
void WorkerManager::Clear_All()
{

	cout << "��ȷ��Ҫѡ������ĵ���" << endl;
	cout << "1. ȷ��" << endl;
	cout << "2. ����" << endl;
	int select = 0;
	cin >> select;
	if (select == 2)
	{
		system("pause");
		system("cls");
	}
	else
	{
		//ɾ���ļ�
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		//�ͷ����ж���
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
		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}
//�ļ����� д�ļ�
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
//ͳ������
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

//��ʼ�����飬Ҫ���ļ��е������������ʾ����
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
		//���ݶ����Ĳ�ͬ��dId�������ݽ��д�����������ͬ����
		if(dId == 1)	//��ͨԱ��
		{
			worker = new Employee(id, name, dId);
		}
		if (dId == 2)	//����
		{
			worker = new Manager(id, name, dId);
		}
		if (dId == 3)	//�ܲ�
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
}

//�жϴ�Ա���Ƿ����
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
//��������
WorkerManager::~WorkerManager()
{

	if (m_EmpArray != NULL)
	{
		delete[]m_EmpArray;
		m_EmpArray = NULL;
	}
}