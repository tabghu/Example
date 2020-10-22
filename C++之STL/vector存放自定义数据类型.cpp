//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//
//};
//void test()
//{
//	vector<Person> vec;
//	Person p1("aaa", 81);
//	Person p2("bbb", 31);
//	Person p3("ccc", 45);
//	Person p4("ddd", 42);
//	Person p5("eee", 53);
//	vec.push_back(p1);
//	vec.push_back(p2);
//	vec.push_back(p3);
//	vec.push_back(p4);
//	vec.push_back(p5);
//
//	//进行遍历
//	for (vector<Person>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		//第一种
//		//cout << (*it).m_Name << " " << (*it).m_Age << endl;
//		//第二种
//		cout << it->m_Name << " " << it->m_Age << endl;
//	}
//
//
//}
//void test01()
//{
//	vector<Person*> vec;
//	Person p1("*aaa", 81);
//	Person p2("*bbb", 31);
//	Person p3("*ccc", 45);
//	Person p4("*ddd", 42);
//	Person p5("*eee", 53);
//	vec.push_back(&p1);
//	vec.push_back(&p2);
//	vec.push_back(&p3);
//	vec.push_back(&p4);
//	vec.push_back(&p5);
//
//
//	for (vector<Person*>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		//第一种遍历
//		//cout << (*it)->m_Name << " " << (*it)->m_Age << endl;
//		//第二种遍历
//		cout << (*(*it)).m_Name << " " << (*(*it)).m_Age << endl;
//	}
//
//}
//int main()
//{
//	test();
//	cout << "----------------------------------" << endl;
//	test01();
//	return 0;
//}