//#include <iostream>
//#include <map>
//using namespace std;
//
//class MyCompare 
//{
//public:
//	bool operator()(int val1, int val2)const
//	{
//		return val1 > val2;
//	}
//};
//
//void test01()
//{
//	//默认从小到大排序
//	//利用仿函数实现从大到小排序
//	map<int, int, MyCompare> m;
//
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//	m.insert(make_pair(5, 50));
//
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}
////利用仿函数可以指定map容器的排序规则
////对于自定义数据类型，map必须要指定排序规则，同set容器