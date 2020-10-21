//#include <iostream>
//using namespace std;
////通过重载递增运算符，实现自己整形数据
//class MyInteger {
//	friend ostream& operator<< (ostream& out, MyInteger myint);
//public:
//	MyInteger(){
//		m_Num = 5;
//	}
//	//前置++
//	MyInteger& operator++() {
//		//先++
//		m_Num++;
//		return *this;
//	}
//
//	//前置--
//	MyInteger& operator--() {
//		//先++
//		m_Num--;
//		return *this;
//	}
//
//	//后置++
//	MyInteger operator++(int) {
//		MyInteger temp = *this;
//		m_Num++;
//		return temp;		//由于此处为局部变量，所以采用值传递的方式
//	}
//
//	//后置--
//	MyInteger operator--(int) {
//		MyInteger temp = *this;
//		m_Num--;
//		return temp;		//由于此处为局部变量，所以采用值传递的方式
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