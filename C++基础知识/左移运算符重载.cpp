////左移运算符重载
////作用：可以输出自定义类型
//#include <iostream>
//using namespace std;
//class Person {
//	friend ostream& operator<< (ostream& out, Person& p);
//public:
//	Person(int a, int b) {
//		this->m_A = a;
//		this->m_B = b;
//	}
//	//成员函数无法实现 p << cout 不是我们想要的效果
//	//void operator<< (Person& p){
//	//}
//private:
//	int m_A;
//	int m_B;
//};
//
////全局函数实现左移重载
////ostream 对象只能有一个
//
//ostream& operator<<(ostream& out, Person& p) {
//	out << "m_A : " << p.m_A << "m_B = " << p.m_B << endl;
//	return out;
//}
//void test00() {
//	Person p(10,20);
//	cout << p << endl;
//}
//int main() {
//	test00();
//	return 0;
//}