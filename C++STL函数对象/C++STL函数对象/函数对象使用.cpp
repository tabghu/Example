//#include <iostream>
//#include <string>
//using namespace std;
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//}
////2.函数对象可以有自己的状态
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		count++;	//统计使用次数
//	}
//	int count = 0;	//内部自己的状态
//};
//void test02()
//{
//	MyPrint myprint;
//	myprint("Hello World");
//	myprint("Hello World");
//	myprint("Hello World");
//	cout << "myPrint调用次数： " << myprint.count << endl;
//}
//
////3.函数对象可以作为参数传递
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//void test03()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, "Hello C++");
//}
//int main()
//{
//	cout << "test01()" << endl;
//	test01();
//	cout << "test02()" << endl;
//	test02();
//	cout << "test03()" << endl;
//	test03();
//	return 0;
//}
////仿函数写法非常灵活， 可以作为参数进行传递
