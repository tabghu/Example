//#include <iostream>
//#include <functional>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////常用遍历算法，搬运transform
//class TransForm
//{
//public:
//	int operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//class Myprint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; ++i)
//	{
//		v.push_back(i);
//	}
//	vector<int>vTarget;		//目标容器
//
//	vTarget.resize(v.size());	//目标容器需要提前开辟空间
//	transform(v.begin(), v.end(), vTarget.begin(), TransForm());
//
//	for_each(vTarget.begin(), vTarget.end(), Myprint());
//}
//int main()
//{
//	test();
//	return 0;
//}
////搬运的目标容器必须他要提前开辟空间，否则无法正常搬运