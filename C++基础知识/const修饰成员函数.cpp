//#include <iostream>
//using namespace std;
////常函数
////成员函数后加const后称这个函数为常函数
////常函数内不可以修改成员属性
////成员属性声明时加关键字mutable后，在常函数中依然可以修改
//
////常对象
////声明对象前加const称为该对象为常对象
////常对象只能调用常函数
//
//class Person {
//public:
//	Person() {
//		m_A = 0;
//		m_B = 0;
//	}
//	void ShowGraed() const {
//		this->m_B = 10;
//		cout << "m_B = " <<  this->m_B << endl;
//	}
//	void myfunc() {
//		this->m_B = 100;
//	}
//public:
//	int m_A;
//	mutable int m_B;
//};
//void test00() {
//	Person p;
//	p.m_A = 10;
//	p.myfunc();
//	const Person p1;	//常量对象
//	cout << "p1.m_A = " << p1.m_A << endl;
//	//p1.m_A = 101;		//常对象可以访问成员变量的值，但不能修改
//	cout << "p1.m_A = " << p1.m_A << endl;
//	/*p1.m_B = 20;
//	cout << "p1.m_B = " << p1.m_B << endl;*/
//
//	p1.ShowGraed();		//常对象调用const函数
//}
//int main() {
//	test00();
//	return 0;
//}