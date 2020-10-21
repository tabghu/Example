//#include <set>
//#include <iostream>
//using namespace std;
//void test()
//{
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//查找
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "找到了元素： " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素！ " << endl;
//	}
//	//统计
//	//由于set容器不允许重复的值出现，所以结果非0即1
//	int num = s1.count(30);
//	cout << "num = " << num << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
////查找	--- find (返回的是迭代器)
////统计	--- count（对于set，结果为0或者1）