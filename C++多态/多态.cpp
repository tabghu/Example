////多态基本概念
////多态分为两类
//
////1.静态多态： 函数重载和运算符重载属于静态多态，复用函数名
////2.动态多态： 派生类和虚函数实现运行时多态
//
////静态多态和动态多态的区别：
////静态多态函数地址早绑定 - 编译阶段确定函数地址
////动态多态函数地址晚绑定 - 运行阶段确定函数地址
//
//#include <iostream>
//using namespace std;
//class Animal
//{
//public:
//	//Speak函数就是虚函数
//	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//	/*void speak()
//	{
//		cout << "动物在说话" << endl;
//	}*/
//};
//class Cat : public Animal
//{
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//class Dog : public Animal
//{
//	void speak()
//	{
//		cout << "小狗在说话 " << endl;
//	}
//};
//
//void test(Animal& animal)
//{
//	animal.speak();
//}
////多态满足条件：
////1.有继承关系
////2.子类重写父类中的虚函数
////多态使用
////父类指针或引用指向子类对象
//int main()
//{
//	Cat cat;
//	test(cat);
//	Dog dog;
//	test(dog);
//	Animal animal;
//	test(animal);
//	return 0;
//}
////总结：
////多态满足条件
////有继承关系
////子类重写父类中发的虚函数
//
////多态使用条件
////父类指针或引用指向子类对象
//
////重写： 函数返回值类型 函数名 参数列表 完全一致称为重写