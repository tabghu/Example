//#include <iostream>
//#include <list>
//#include <string>
//using namespace std;
////案例描述： 将Person自定义数据类型进行排序，Person中属性有姓名，年龄，身高
////排序规则： 按照年龄进行升序，如果年龄相同按照身高进行降序
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
//	string m_Name;	//姓名
//	int m_Age;		//年龄
//	int m_Height;	//身高
//};
////自定义对象类型比较
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
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 45, 180);
//	Person p3("孙权", 40, 170);
//	Person p4("赵云", 25, 190);
//	Person p5("张飞", 35, 160);
//	Person p6("关羽", 35, 200);
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
//		cout << "姓名： " << it->m_Name << "年龄 " << it->m_Age << "身高： "
//			<< it->m_Height << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}
//
////对于自定义数据类型，必须要制定排序规则， 否则编译器不知道如何进行排序
////高级排序只是在排序规则上再进行一次逻辑规则制定，并不复杂
