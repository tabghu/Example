////dequeû�������ĸ���
////�ж��Ƿ�Ϊ��--empty
////����Ԫ�ظ��� -- size
////����ָ������ -- resize
//
//#include <iostream>
//#include <deque>
//using namespace std;
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////��С����
//void test()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	//�ж������Ƿ�Ϊ��
//	if (d1.empty())
//	{
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1��Ϊ�գ�" << endl;
//		//ͳ�ƴ�С
//		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
//	}
//	//����ָ����С
//	d1.resize(15, 1);
//	printDeque(d1);
//	
//	d1.resize(5);
//	printDeque(d1);
//}
//int main()
//{
//	test();
//	return 0;
//}