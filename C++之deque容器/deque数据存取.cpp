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
//void test()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(100);
//	d.push_back(200);
//	for (int i = 0; i < d.size(); ++i)
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//
//	cout << "front: " << d.front() << endl;
//	cout << "back: " << d.back() << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
////除了用迭代器获取deque容器中元素，[]和at也可以
////front返回容器第一个元素
////back返回最后一个元素