////对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
////实现两个自定义数据类型相加的运算
//#include <iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "这是一个默认构造函数" << endl;
//		m_A = 0;
// 		m_B = 0;
//	}
//	
//	Person(int a, int b): m_A(a), m_B(b){
//		cout << "这是一个用户自定义构造函数" << endl;
//	}
//	
//	//成员函数重载+号
//	Person operator+(const Person& p) {
//		Person temp(0,0);
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//
//	void ShowInfo() {
//		cout << "m_A =  " << this->m_A << endl;
//		cout << "m_B =  " << this->m_B << endl;
//
//	}
//
//public:
//	int m_A;
//	int m_B;
//};
//
////全局函数重载+
//Person operator+(const Person& p1, const Person& p2) {
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A + 10;
//	temp.m_B = p1.m_A + p2.m_B + 10;
//	return temp;
//}
//
//void test00() {
//	Person p1(10, 20);
//	Person p2(20, 30);
//	Person p3 = p1 + p2;
//	p3.ShowInfo();
//	p3 = p3 + p2;
//	p3.ShowInfo();
//
//}
//
//int main() {
//	test00();
//	return 0;
//}