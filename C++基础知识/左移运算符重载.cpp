////�������������
////���ã���������Զ�������
//#include <iostream>
//using namespace std;
//class Person {
//	friend ostream& operator<< (ostream& out, Person& p);
//public:
//	Person(int a, int b) {
//		this->m_A = a;
//		this->m_B = b;
//	}
//	//��Ա�����޷�ʵ�� p << cout ����������Ҫ��Ч��
//	//void operator<< (Person& p){
//	//}
//private:
//	int m_A;
//	int m_B;
//};
//
////ȫ�ֺ���ʵ����������
////ostream ����ֻ����һ��
//
//ostream& operator<<(ostream& out, Person& p) {
//	out << "m_A : " << p.m_A << "m_B = " << p.m_B << endl;
//	return out;
//}
//void test00() {
//	Person p(10,20);
//	cout << p << endl;
//}
//int main() {
//	test00();
//	return 0;
//}