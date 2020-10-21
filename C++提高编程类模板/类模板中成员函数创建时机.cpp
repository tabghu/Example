//#include <iostream>
//using namespace std;
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//	//类模板中的成员函数，并不是一开始就创建的，而是在模板调用时再生成
//	void fun1()
//	{
//		obj.showPerson1();
//	}
//	void fun2()
//	{
//		obj.showPerson2();
//	}
//};
//void test()
//{
//	MyClass<Person1> m;
//	m.fun1();
//	//函数调用时才会出错，说明函数调用才会去创建成员函数
//	//m.fun2();
//}
//int main()
//{
//	test();
//	return 0;
//}
//
////总结：类模板中的成员函数并不是在一开始就创建的，在调用时才会创建