//#include <iostream>
//using namespace std;
//
//class Person {
//public :
//	//��̬��Ա�����ص㣺
//	//1.������һ������
//	//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//
//	static void func() {
//		cout << "func()����" << endl;
//		m_C = 100;
//		//m_B = 100;	//���󣬲����Է��ʷǾ�̬��Ա����
//
//	}
//	static int m_C;
//	int m_B;
//private:
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//	static void func2() {
//		cout << "func2����" << endl;
//	}
//};
//int Person::m_C = 10;
//void test05() {
//	//��̬���溯�����ַ��ʷ�ʽ
//	//1.ͨ������
//	Person p1;
//	p1.func();
//	//2. ͨ������
//	Person::func();
//	//Person::func2();	//˽��Ȩ�޷��ʲ���
//}
//
//int main06()
//{
//	test05();
//	return 0;
//}