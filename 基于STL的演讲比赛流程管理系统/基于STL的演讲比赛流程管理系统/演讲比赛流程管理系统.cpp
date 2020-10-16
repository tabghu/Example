#include <iostream>
#include "speechManager.h"
#include "Speaker.h"
using namespace std;

int main()
{
	speechManager sm;

	//testģ��
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "ѡ�ֱ��" << it->first
			<< " ����: " << it->second.m_Name
			<< " �ɼ��� " << it->second.m_Score[0] << endl;
	}*/
	int choice = 0;		//�����洢�û���ѡ��
	while (true)
	{
		sm.show_Menu();
		cout << "����������ѡ�� " << endl;
		cin >> choice;		//�����û���ѡ��
		switch (choice)
		{
		case 1:		//��ʼ����
			sm.startSpeech();
			break;
		case 2:		//�鿴��¼
			sm.showRecord();
			break;
		case 3:		//��ռ�¼
			sm.clearRecord();
			break;
		case 0:		//�˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			system("cls");//����
			break;
		}
	}
	system("pause");
	return 0;
}