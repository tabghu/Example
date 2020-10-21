//#include <iostream>
//using namespace std;
////在多态中，通常父类中虚函数的实现的毫无意义的主要都是调用重写的内容
////因此可以将虚函数改为纯虚函数
////纯虚函数： virtual 返回值类型 函数名（参数列表 ） = 0
////抽象类特点：
////1. 无法实例化对象
////2. 子类必须是重写抽象类中的纯虚函数， 否则也属于抽象类
//
//class Base
//{
//public:
//	//纯虚函数
//	//类中只要有一个纯虚函数就称为抽象类
//	//抽象类无法实例化对象
//	//子类必须重写父类中的纯虚函数， 否则也属于抽象类
//	virtual void func() = 0;
//};
//class Son : public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func调用" << endl;
//	}
//};
//void test()
//{
//	Base* base = NULL;
//	//Base* base = new Base;	错误，抽象类无法实例化对象
//	base = new Son;
//	//使用父类指针指向子类对象
//	base->func();
//	delete base;	//记得销毁
//}
//int main()
//{
//	test();
//	return 0;
//}