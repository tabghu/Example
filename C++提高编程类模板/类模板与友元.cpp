//#include <iostream>
//#include <string>
//using namespace std;
//
////2.ȫ�ֺ��������Ԫ ����ʵ�� - ��������ģ���������·���������ģ�嶨�壬������Ԫ
//template<class T1, class T2>
//class Person;
//
//
////��������˺���ģ�壬���Խ�ʵ��д������ ������Ҫ��ʵ����д�����ǰ���ñ���������
////Ҫ����������� Ҫ������ģ��֮ǰ
//template <class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	cout << "����ʵ�� ---- ������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
//}
//
//
//template <class T1, class T2>
//class Person
//{
//	//1.ȫ�ֺ��������Ԫ ����ʵ��
//	friend void printPerson(Person<T1, T2>& p)
//	{
//		cout << "������" << p.m_Name << "  ���䣺" << p.m_Age << endl;
//	}
//	//2. ȫ�ֺ��������Ԫ ����ʵ��
//	friend void printPerson2<>(Person<T1, T2>& p);
//public:
//	Person(T1 name, T2 age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1.ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int>p("��˽�", 20);
//	printPerson2(p);
//}
//int main()
//{
//	test01();
//	return 0;
//}