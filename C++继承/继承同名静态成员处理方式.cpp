//#include <iostream>
//using namespace std;
////Q: �̳���ͬ���ľ�̬��Ա�������������ν��з��ʣ�
//
////��̬��Ա�ͷǾ�̬��Ա����ͬ�� ����ʽһ��
//
////��������ͬ����Ա�� ֱ�ӷ��ʼ���
////���ʸ���ͬ����Ա�� ��Ҫ��������
//
//class Base
//{
//public:
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//	static int m_A;
//};
//int Base::m_A = 100;
//class Son : public Base
//{
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int m_A;
//};
//int Son::m_A = 200;
//void test01()
//{
//	//ͨ���������
//	cout << "ͨ���������: " << endl;
//	Son s;
//	cout << "Son �� m_A = " << s.m_A << endl;
//	cout << "Base �� m_A = " << s.Base::m_A << endl;
//
//	//ͨ����������
//	cout << "ͨ����������: " << endl;
//	cout << "Son �� m_A = " << Son::m_A << endl;
//	cout << "Base �� m_A = " << Son::Base::m_A << endl;
//}
////ͬ����Ա����
//void test02()
//{
//	//ͨ���������
//	cout << "ͨ���������: " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	cout << "ͨ���������ʣ� " << endl;
//	Son::func();
//	Son::Base::func();
//	//����ͬ������������ص�����������ͬ����������Ҫ�����������
//
//	Son::Base::func(100);
//}
//int main()
//{
//	test01();
//	return 0;
//}
////ͬ����̬��Ա����ʽ�ͷǾ�̬����ʽһ����ֻ���������ַ��ʵķ�ʽ(ͨ������ �� ͨ������)