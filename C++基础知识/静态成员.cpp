//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	static int m_A;		//��̬��Ա����
//	//��̬��Ա�����ص�
//	//1.�ڱ���׶η����ڴ�
//	//2.���������������ʼ��
//	//3.���ж�����ͬһ������
//private:
//	static int m_B;	//��Ա����Ҳ���з���Ȩ�޵�
//};
//int Person::m_A = 10;
//int Person::m_B = 20;
//
//void test04() {
//	//��̬��Ա�������ַ��ʷ�ʽ
//	//1.ͨ������
//	Person p1;
//	Person p2;
//	p1.m_A = 100;
//	cout << "p1.m_A = " << p1.m_A << endl;	//����һ������
//	cout << "p2.m_A = " << p2.m_A << endl;	//����һ������
//
//	//cout << "p1.m_B = " << p1.m_B << endl;
//	//2.ͨ������
//	cout << "p1.m_A = " << Person::m_A << endl;
//	//cout << "p1.m_B = " << Person::m_B << endl;
//}
//int main05(){
//	test04();
//	return 0;
//}