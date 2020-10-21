////#include <iostream>
////#include <set>
////using namespace std;
////
////class MyCompare
////{
////public:
////	bool operator()(int v1, int v2) const
////	{
////		return v1 > v2;
////	}
////};
////void test01()
////{
////	set<int> s1;
////	s1.insert(10);
////	s1.insert(40);
////	s1.insert(20);
////	s1.insert(30);
////	s1.insert(50);
////
////	//默认从小到大
////	for (set<int>::iterator it = s1.begin(); it != s1.end(); ++it)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////
////	//指定排序规则
////	set<int, MyCompare> s2;
////	s2.insert(10);
////	s2.insert(40);
////	s2.insert(20);
////	s2.insert(30);
////	s2.insert(50);
////
////	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); ++it)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////int main()
////{
////	test01();
////	return 0;
////}
//
//#include <iostream>
//#include <set>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//class comparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//		//按照年龄进行排序
//		return p1.m_Age < p2.m_Age;
//	}
//};
//
//void test()
//{
//	set<Person, comparePerson> s;
//	Person p1("刘备", 23);
//	Person p2("关羽", 27);
//	Person p3("张飞", 25);
//	Person p4("赵云", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); ++it)
//	{
//		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
////总结： 对于自定义数据类型， set必须要指定排序规则才可以插入数据