//#include <iostream>
//#include <string>
//using namespace std;
////������
////ģ���ͨ���Բ��������ܵ�
// //C++Ϊ�˽���������⣬�ṩģ������أ�����Ϊ��Щ�ض��������ṩ���廯��ģ��
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->m_Age = age;
//	}
//	string name;
//	int m_Age;
//};
//
////��ͨ����ģ��
//template<class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
////���廯����ʽ���廯��ԭ�ͺͶ�����template<>��ͷ����ͨ��������ָ������
////���廯�����ڳ���ģ��
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Age == p2.m_Age && p1.name == p2.name)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	//�����������Ϳ���ֱ��ʹ��ͨ�õĺ���ģ��
//	bool ret = myCompare(a, b);
//	if (ret)
//	{
//		cout << "a == b" << endl;
//	}
//	else
//	{
//		cout << "a != b" << endl;
//	}
//}
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//	//�Զ����������ͣ� ���������ͨ�ĺ���ģ��
//	//���Դ������廯��Person ��������ģ�壬�������⴦���������
//	bool ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "p1 == p2" << endl;
//	}
 
//	else
//	{
//		cout << "p1 != p2" << endl;
//	}
//}
//
//int main()
//{
//	test();
//	test02();
//	return 0;
//}