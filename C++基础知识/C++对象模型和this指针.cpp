//#include <iostream>
//using namespace std;
//
//class Person {
//	Person() {
//		mA = 0;
//	}
//	//非静态成员变量占对象空间
//	int mA;
//	//静态成员变量不占对象空间
//	static int mB;
//	void func() {
//		cout << "func()调用" << endl;
//		cout << "mA:" << this->mA << endl;
//	}
//	//静态成员函数也不占对象空间
//	static void sfunc() {
//		cout << "sfunc()调用" << endl;
//	}
//};
//int main() {
//	cout << "sizeof(Person): " << sizeof(Person) << endl;
//}