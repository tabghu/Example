//#include <iostream>
//using namespace std;
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//public:
//	int m_A;
//};
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;	//��ʼ��m_B ��������⣬���Ǹ�ΪmA�ͻ���ֲ���ȷ
//	}
//public:
//	int m_A;
//};
//
////�﷨ class ���� : �̳з�ʽ ����1 �� �̳з�ʽ ����2
//class Son : public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//public:
//	int m_C;
//	int m_D;
//};
////��̳����ײ�����Աͬ�������
////ͨ��ʹ������������������ֵ�����һ������ĳ�Ա
//
//void test()
//{
//	Son s;
//	cout << "sizeof Son " << sizeof(s) << endl;
//	//cout << "s.m_A" << s.m_A << endl;
//	cout << "s.Base1::m_A " << s.Base1::m_A << endl;
//	cout << "s.Base2::m_A " << s.Base2::m_A << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
////�ܽ᣺��̳���������г�����ͬ�����������ʹ��ʱҪ��������