//#include <iostream>
//#include <string>
//using namespace std;
//class Phone {
//public:
//	Phone(string name) {
//		m_phoneName = name;
//		cout << "phone构造" << endl;
//	}
//	~Phone() {
//		cout << "Phone析构" << endl;
//	}
//	string m_phoneName;
//};
//class Person {
//public:
//	//初始化列表可以告诉编译器调用哪一个构造函数
//	Person(string name, string pName) : m_Name(name), m_phone(pName) {
//		cout << "person 构造" << endl;
//	}
//	~Person() {
//		cout << "person析构" << endl;
//	}
//	void playGame() {
//		cout << m_Name << "使用" << m_phone.m_phoneName << "牌手机" << endl;
//	}
//	string m_Name;
//	Phone m_phone;
//
//};
//void test03() {
//	//当类中成员是其它类对象时，我们称该成员为 对象成员
//	//构造的顺序是： 先调用对象成员的构造，再调用本类构造
//	//析构顺序与构造相反
//	Person p("张三", "苹果X");
//	p.playGame();
//}
//int main04()
//{
//	test03();
//	return 0;
//}