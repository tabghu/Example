#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Worker.h"
#include "Boss.h"
#include "WorkerManager.h"
using namespace std;

//cout << "---------------------------------------------" << endl;
//cout << "--------------��ӭ����ְ������ϵͳ------------" << endl;
//cout << "----------------0.�˳�����ϵͳ----------------" << endl;
//cout << "----------------1.����ְ����Ϣ----------------" << endl;
//cout << "----------------2.��ʾְ����Ϣ----------------" << endl;
//cout << "----------------3.ɾ����ְְ��----------------" << endl;
//cout << "----------------4.�޸�ְ����Ϣ----------------" << endl;
//cout << "----------------5.����ְ����Ϣ----------------" << endl;
//cout << "----------------6.���ձ������----------------" << endl;
//cout << "----------------7.��������ĵ�----------------" << endl;
//cout << "---------------------------------------------" << endl;
//cout << endl;
void test()
{
	Worker* worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "����", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "����", 3);
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