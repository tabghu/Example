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
//void test01()
//{
//	deque<int> d;
//	//β��
//	//10 20
//	d.push_back(10);
//	d.push_back(20);
//	//ͷ��
//	//200 100 10 20
//	d.push_front(100);
//	d.push_front(200);
//
//	printDeque(d);
//	//βɾ
//	//200 100 10
//	d.pop_back();
//
//	//ͷɾ
//	//100 10
//	d.pop_front();
//	printDeque(d);
//}
////����
//void test02()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(100);
//	d.push_back(200);
//	printDeque(d);
//	d.insert(d.begin(), 100);
//	printDeque(d);
//
//	d.insert(d.begin(), 2, 100000);
//	printDeque(d);
//
//
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	//��posλ�ò���[beg, end)���������, �޷���ֵ
//	d.insert(d.begin(), d2.begin(), d2.end());
//	printDeque(d);
//}
////ɾ��
//void test03()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(100);
//	d.push_back(200);
//	printDeque(d);
//
//	//ɾ��ͷ�ڵ�Ԫ��
//	//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//	d.erase(d.begin());
//	d.clear();
//	printDeque(d);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
