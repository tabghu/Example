//#include <iostream>
//#include <string>
//using namespace std;
//
////2.全局函数配合友元 类外实现 - 先做函数模板声明，下方在做函数模板定义，在做友元
//template<class T1, class T2>
//class Person;
//
//
////如果声明了函数模板，可以将实现写到后面 否则需要将实现体写到类的前面让编译器看到
////要对类进行声明 要声明在模板之前
//template <class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	cout << "类外实现 ---- 姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
//}
//
//
//template <class T1, class T2>
//class Person
//{
//	//1.全局函数配合友元 类内实现
//	friend void printPerson(Person<T1, T2>& p)
//	{
//		cout << "姓名：" << p.m_Name << "  年龄：" << p.m_Age << endl;
//	}
//	//2. 全局函数配合友元 类外实现
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
////1.全局函数在类内实现
//void test01()
//{
//	Person<string, int>p("猪八戒", 20);
//	printPerson2(p);
//}
//int main()
//{
//	test01();
//	return 0;
//}