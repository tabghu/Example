//#include <iostream>
//using namespace std;
//
//
////�������κ���
//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////���������ͺ���
//void swapInt(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////����ģ���ṩͨ�õĽ�������
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test()
//{
//	int a = 10;
//	int b = 20;
//	
//	//swapInt(a, b);
//
//	//����ģ��ʵ�ֽ���
//	//1.�Զ������Ƶ�
//	mySwap(a, b);
//
//	//2.��ʾָ������
//	//mySwap<int>(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//
////�ܽ᣺
////����ģ�����ùؼ���template
////ʹ�ú���ģ�������ַ�ʽ���Զ������Ƶ�����ʾָ������
////ģ���Ŀ����Ϊ����߸����ԣ������Ͳ�����