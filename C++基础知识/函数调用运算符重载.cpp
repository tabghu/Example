////函数调用运算符（）也可以重载
////由于重载后使用的方式非常像函数的调用，因此称为仿函数
////仿函数没有固定写法，非常灵活
//#include <iostream>
//#include <string>
//using namespace std;
//class Person {
//	//默认构造函数
//	//默认析构函数
//	//默认拷贝构造函数
//	//赋值运算符重载
//public:
//	void operator() (string text){
//		cout << text << endl;
//	}
//};
//void test00() {
//	//重载的()操作符，也称为仿函数
//	Person xiaoming;
//	xiaoming("大家好，我是小明");
//	
//}
//
//class Myadd{
//public:
//	int operator()(int val1, int val2) {
//		return val1 + val2;
//	}
//};
//void test90() {
//	Myadd myadd;
//	int ret = myadd(10, 10);
//	cout << "ret = " << ret << endl;
//	//构建匿名对象 
//	cout << Myadd()(20, 20) << endl;
//}
//int main() {
//	test00();
//	test90();
//	return 0;
//}