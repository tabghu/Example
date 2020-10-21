//#include <iostream>
//#include <set>
//using namespace std;
////set和multiset区别
//void test()
//{
//	set<int> s1;
//	pair<set<int>::iterator, bool> ret = s1.insert(10);
//	cout << *(ret.first) << endl;
//	cout << ret.second << endl;
//	if (ret.second)
//	{
//		cout << "第一次插入成功！" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败！" << endl;
//	}
//	ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功！" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败！" << endl;
//	}
//	//multiset
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
////总结： 如果不允许插入重复数据可以利用set
////如果需要插入重复数据利用multiset