//#include <iostream>
//using namespace std;
//template<class T>
////利用模板提供通用的交换函数
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1.自动类型推导，必须推导出一致的数据类型T,才可以使用
//void test()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b);
//	//mySwap(a, c);
//}
//
////2.模板必须要确定出T的数据类型，才可以使用
//template<class T>
//void func()
//{
//	cout << "func()调用！" << endl;
//}
//void test01()
//{
//	//func();
//	func<int>();
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}
////使用模板时必须要确定出通用数据类型T，并且能推导出一致的类型
//
