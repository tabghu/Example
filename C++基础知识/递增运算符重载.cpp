//#include <iostream>
//using namespace std;
////ͨ�����ص����������ʵ���Լ���������
//class MyInteger {
//	friend ostream& operator<< (ostream& out, MyInteger myint);
//public:
//	MyInteger(){
//		m_Num = 5;
//	}
//	//ǰ��++
//	MyInteger& operator++() {
//		//��++
//		m_Num++;
//		return *this;
//	}
//
//	//ǰ��--
//	MyInteger& operator--() {
//		//��++
//		m_Num--;
//		return *this;
//	}
//
//	//����++
//	MyInteger operator++(int) {
//		MyInteger temp = *this;
//		m_Num++;
//		return temp;		//���ڴ˴�Ϊ�ֲ����������Բ���ֵ���ݵķ�ʽ
//	}
//
//	//����--
//	MyInteger operator--(int) {
//		MyInteger temp = *this;
//		m_Num--;
//		return temp;		//���ڴ˴�Ϊ�ֲ����������Բ���ֵ���ݵķ�ʽ
//	}
//
//private:
//	int m_Num;
//};
//ostream& operator<< (ostream& out, MyInteger myint) {
//	out << "myint.m_Num = " << myint.m_Num << endl;
//	return out;
//}
//void test00() {
//	MyInteger myInt;
//	cout << "myInt = " <<myInt << endl;
//	cout << "++myInt = " << ++myInt << endl;
//	cout << "myInt = " << myInt << endl;
//	cout << "++(++myInt) = " << ++(++myInt) << endl;
//	cout << "myInt = " << myInt << endl;
//	cout << "myInt = " << myInt++ << endl;
//	cout << 5 << endl;
//	cout << "--myInt = " << --myInt << endl;
//	cout << "myInt-- = " << myInt-- << endl;
//	cout << "myInt = " << myInt << endl;
//
//
//}
//int main() {
//	test00();
//	return 0;
//}