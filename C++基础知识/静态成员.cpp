//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	static int m_A;		//静态成员变量
//	//静态成员变量特点
//	//1.在编译阶段分配内存
//	//2.类内声明，类外初始化
//	//3.所有对象共享同一份数据
//private:
//	static int m_B;	//成员变量也是有访问权限的
//};
//int Person::m_A = 10;
//int Person::m_B = 20;
//
//void test04() {
//	//静态成员变量两种访问方式
//	//1.通过对象
//	Person p1;
//	Person p2;
//	p1.m_A = 100;
//	cout << "p1.m_A = " << p1.m_A << endl;	//共享一份数据
//	cout << "p2.m_A = " << p2.m_A << endl;	//共享一份数据
//
//	//cout << "p1.m_B = " << p1.m_B << endl;
//	//2.通过类名
//	cout << "p1.m_A = " << Person::m_A << endl;
//	//cout << "p1.m_B = " << Person::m_B << endl;
//}
//int main05(){
//	test04();
//	return 0;
//}