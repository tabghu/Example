//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> vTarget;
//	//取两个里面较大的值给目标容器开辟空间
//	vTarget.resize(max(v1.size(), v2.size()));
//
//	//返回目标容器的最后一个迭代器地址
//	cout << "v1 与 v2的差集为： " << endl;
//	vector<int>::iterator itEnd =
//		set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//}
//int main()
//{
//	test01();
//	return 0;
//}