#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Worker.h"
#include "Boss.h"
#include "WorkerManager.h"
using namespace std;

//cout << "---------------------------------------------" << endl;
//cout << "--------------欢迎进入职工管理系统------------" << endl;
//cout << "----------------0.退出管理系统----------------" << endl;
//cout << "----------------1.增加职工信息----------------" << endl;
//cout << "----------------2.显示职工信息----------------" << endl;
//cout << "----------------3.删除离职职工----------------" << endl;
//cout << "----------------4.修改职工信息----------------" << endl;
//cout << "----------------5.查找职工信息----------------" << endl;
//cout << "----------------6.按照编号排序----------------" << endl;
//cout << "----------------7.清空所有文档----------------" << endl;
//cout << "---------------------------------------------" << endl;
//cout << endl;
void test()
{
	Worker* worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "李四", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "王五", 3);
	worker->showInfo();
	delete worker;
}
void menu()
{
	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.ShowMenu();
		cin >> choice;
		switch (choice)
		{
		case 0:
			wm.Exit_Sys();
			break;
		case 1:
			wm.Add_Employ();
			break;
		case 2:
			wm.Display_Employ();
			break;
		case 3:
			wm.Del_Employ();
			break;
		case 4:
			wm.Updata_Employ();
			break;
		case 5:
			wm.Search_Employ();
			break;
		case 6:
			wm.Sort_Employ();
			break;
		case 7:
			wm.Clear_All();
			break;
		default:
			system("pause");
			system("cls");
			break;
		}
	}
}
int main()
{
	//test();
	menu();
	return 0;
}