//#include <iostream>
//using namespace std;
//int myAdd(const int a, const int b)
//{
//	return a + b;
//}
////函数模板
//template <class T>
//T myAdd02(const T a, const T b)
//{
//	return a + b;
//}
////使用函数模板时，如果使用自动类型推导，不会发生自动类型转换，即隐式类型转换
//void test()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd(a, c) << endl;	//正确 将char类型的‘c’隐式转换为int类型 ‘ c’对应的ascii码值
//	//myAdd02(a, c);	//报错，使用自动类型推导，不会发生隐式类型转换
//	myAdd02<int>(a, c);	//正确， 如果使用显式指定类型，可以发生隐式类型转换
//	cout << myAdd02<int>(a, c) << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
////总结： 建议使用显式指定类型的方式，调用函数模板，因为可以自己确定通用类型T