//#include <iostream>
//using namespace std;
////������
////��Ա�������const����������Ϊ������
////�������ڲ������޸ĳ�Ա����
////��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
//
////������
////��������ǰ��const��Ϊ�ö���Ϊ������
////������ֻ�ܵ��ó�����
//
//class Person {
//public:
//	Person() {
//		m_A = 0;
//		m_B = 0;
//	}
//	void ShowGraed() const {
//		this->m_B = 10;
//		cout << "m_B = " <<  this->m_B << endl;
//	}
//	void myfunc() {
//		this->m_B = 100;
//	}
//public:
//	int m_A;
//	mutable int m_B;
//};
//void test00() {
//	Person p;
//	p.m_A = 10;
//	p.myfunc();
//	const Person p1;	//��������
//	cout << "p1.m_A = " << p1.m_A << endl;
//	//p1.m_A = 101;		//��������Է��ʳ�Ա������ֵ���������޸�
//	cout << "p1.m_A = " << p1.m_A << endl;
//	/*p1.m_B = 20;
//	cout << "p1.m_B = " << p1.m_B << endl;*/
//
//	p1.ShowGraed();		//���������const����
//}
//int main() {
//	test00();
//	return 0;
//}