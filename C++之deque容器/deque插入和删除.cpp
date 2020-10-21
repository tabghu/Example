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
//	//尾插
//	//10 20
//	d.push_back(10);
//	d.push_back(20);
//	//头插
//	//200 100 10 20
//	d.push_front(100);
//	d.push_front(200);
//
//	printDeque(d);
//	//尾删
//	//200 100 10
//	d.pop_back();
//
//	//头删
//	//100 10
//	d.pop_front();
//	printDeque(d);
//}
////插入
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
//	//在pos位置插入[beg, end)区间的数据, 无返回值
//	d.insert(d.begin(), d2.begin(), d2.end());
//	printDeque(d);
//}
////删除
//void test03()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(100);
//	d.push_back(200);
//	printDeque(d);
//
//	//删除头节点元素
//	//删除pos位置的数据，返回下一个数据的位置
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
