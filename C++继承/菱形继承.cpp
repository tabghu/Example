//#include <iostream>
//using namespace std;
//class Animal
//{
//public:
//	int m_Age;
//};
//
////继承前virtual 关键字了，变为虚继承
////此时公共的父类Animal称为虚基类
//class Sheep : virtual public Animal {};
//class Tuo : virtual public Animal {};
////class Sheep :  public Animal {};
////class Tuo :  public Animal {};
//class SheepTuo : public Sheep, public Tuo{};
//void test()
//{
//	SheepTuo st;
//	//使用对象进行访问 对象名+作用域+成员属性访问
//	st.Sheep::m_Age = 100;	
//	st.Tuo::m_Age = 200;
//
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age =  " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
////菱形继承带来的主要问题是子类继承两份相同的数据， 导致资源浪费以及毫无意义
////利用虚继承可以解决菱形继承的问题
//
