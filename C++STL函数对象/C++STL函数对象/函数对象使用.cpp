//#include <iostream>
//#include <string>
//using namespace std;
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//}
////2.��������������Լ���״̬
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		count++;	//ͳ��ʹ�ô���
//	}
//	int count = 0;	//�ڲ��Լ���״̬
//};
//void test02()
//{
//	MyPrint myprint;
//	myprint("Hello World");
//	myprint("Hello World");
//	myprint("Hello World");
//	cout << "myPrint���ô����� " << myprint.count << endl;
//}
//
////3.�������������Ϊ��������
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//void test03()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, "Hello C++");
//}
//int main()
//{
//	cout << "test01()" << endl;
//	test01();
//	cout << "test02()" << endl;
//	test02();
//	cout << "test03()" << endl;
//	test03();
//	return 0;
//}
////�º���д���ǳ��� ������Ϊ�������д���
