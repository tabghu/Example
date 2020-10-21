//#include <iostream>
//#include <string>
//using namespace std;
//
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->mName = name;
//		this->mAge = age;
//	}
//	void showPerson()
//	{
//		cout << "name : " << mName << "\t aeg : " << this->mAge << endl;
//	}
//public:
//	NameType mName;
//	AgeType mAge;
//};
//
////类模板没有自动类型推导的使用方式
//void test()
//{
//
//	Person<string, int>p1("孙悟空", 999);	//必须使用显示指定类型的方式，使用类模板
//	p1.showPerson();
//	Person<string>p2("猪八戒", 1000);		//类模板中的模板参数列表 可以指定默认参数
//	p2.showPerson();
//}
//int main()
//{
//	test();
//	return 0;
//}