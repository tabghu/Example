////����������
////��˾������Ƹ��10��Ա����ABCDEFGHIJ��,10��Ա�����빫˾֮����Ҫָ��Ա�����ĸ����Ź���
////Ա����Ϣ�У� ����	�������	�� ���ŷ�Ϊ�� �߻����������з�
////�����10��Ա�����䲿�ź͹���
////ͨ��multimap������Ϣ�Ĳ��� key�����ű�ţ�value(Ա��)
////�ֲ�����ʾԱ����Ϣ
//
//
////ʵ�ֲ���
////����10��Ա�����ŵ�vector��
////����vector������ȡ��ÿ��Ա���������������
////����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
////�ֲ�����ʾԱ����Ϣ
//#include <iostream>
//#include <map>
//#include <vector>
//#include <string>
//#include <ctime>
//using namespace std;
//
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//void createWorker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "Ա��";
//		worker.m_Name += nameSeed[i];
//		worker.m_Salary = rand() % 10000 + 10000;
//
//		//��Ա�����뵽������
//		v.push_back(worker);
//	}
//}
//
////Ա������
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		//����������ű��
//		int deptId = rand() % 3;	// 0  1  2
//		//��Ա�����뵽������
//		//key���ű�ţ� value����Ա��
//		m.insert(make_pair(deptId, *it));
//	}
//}
//void showWorkerByGroup(multimap<int, Worker>& m)
//{
//	cout << "�߻�����" << endl;
//	multimap<int, Worker>::iterator pos = m.find(CEHUA);
//	int count = m.count(CEHUA);
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << " ����: " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//	cout << "-----------------------------" << endl;
//	cout << "��������: " << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU);
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << " ����: " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//	cout << "-----------------------------" << endl;
//	cout << "�з�����: " << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA);
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << " ����: " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	//1.����Ա��
//	vector<Worker>vworker;
//	createWorker(vworker);
//	//2.Ա������
//	multimap<int, Worker>mworker;
//	setGroup(vworker, mworker);
//
//	//3.������ʾԱ��
//	showWorkerByGroup(mworker);
//	return 0;
//}
////�������Լ�ֵ����ʽ���ڣ� ������map����multimap