//#include <iostream>
//#include <list>
//#include <string>
//using namespace std;
////���������� ��Person�Զ����������ͽ�������Person�����������������䣬���
////������� ������������������������ͬ������߽��н���
//
//class Person
//{
//public:
//	Person(string name, int age, int height)
//	{
//		m_Name = name;
//		m_Age = age;
//		m_Height = height;
//	}
//public:
//	string m_Name;	//����
//	int m_Age;		//����
//	int m_Height;	//���
//};
////�Զ���������ͱȽ�
//bool ComparePerson(Person& p1, Person& p2)
//{
//	if (p1.m_Age == p2.m_Age)
//	{
//		return p1.m_Height > p2.m_Height;
//	}
//	else
//	{
//		return p1.m_Age < p2.m_Age;
//	}
//}
//void test01()
//{
//	list<Person> l;
//	Person p1("����", 35, 175);
//	Person p2("�ܲ�", 45, 180);
//	Person p3("��Ȩ", 40, 170);
//	Person p4("����", 25, 190);
//	Person p5("�ŷ�", 35, 160);
//	Person p6("����", 35, 200);
//	
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	l.push_back(p5);
//	l.push_back(p6);
//
//	for (list<Person>::iterator it = l.begin(); it != l.end(); ++it)
//	{
//		cout << "������ " << it->m_Name << "���� " << it->m_Age << "��ߣ� "
//			<< it->m_Height << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}
//
////�����Զ����������ͣ�����Ҫ�ƶ�������� �����������֪����ν�������
////�߼�����ֻ��������������ٽ���һ���߼������ƶ�����������
