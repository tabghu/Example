//#include <iostream>
//using namespace std;
//int myAdd(const int a, const int b)
//{
//	return a + b;
//}
////����ģ��
//template <class T>
//T myAdd02(const T a, const T b)
//{
//	return a + b;
//}
////ʹ�ú���ģ��ʱ�����ʹ���Զ������Ƶ������ᷢ���Զ�����ת��������ʽ����ת��
//void test()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd(a, c) << endl;	//��ȷ ��char���͵ġ�c����ʽת��Ϊint���� �� c����Ӧ��ascii��ֵ
//	//myAdd02(a, c);	//����ʹ���Զ������Ƶ������ᷢ����ʽ����ת��
//	myAdd02<int>(a, c);	//��ȷ�� ���ʹ����ʽָ�����ͣ����Է�����ʽ����ת��
//	cout << myAdd02<int>(a, c) << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
////�ܽ᣺ ����ʹ����ʽָ�����͵ķ�ʽ�����ú���ģ�壬��Ϊ�����Լ�ȷ��ͨ������T