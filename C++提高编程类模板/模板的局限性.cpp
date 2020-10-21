//#include <iostream>
//#include <string>
//using namespace std;
////局限性
////模板的通用性并不是万能的
// //C++为了解决这种问题，提供模板的重载，可以为这些特定的类型提供具体化的模板
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
////普通函数模板
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
////具体化，显式具体化的原型和定义以template<>开头，并通过名称来指出类型
////具体化优先于常规模板
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
//	//内置数据类型可以直接使用通用的函数模板
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
//	//自定义数据类型， 不会调用普通的函数模板
//	//可以创建具体化的Person 数据类型模板，用于特殊处理这个类型
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