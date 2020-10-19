//#include <iostream>
//#include <vector>
//#include <ctime>
//#include <algorithm>
//using namespace std;
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test()
//{
//	srand((unsigned int)time(NULL));
//	vector<int> v;
//	for (int i = 0; i < 10; ++i)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//
//	//打乱顺序
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
////rand_shuffle洗牌算法比较实用， 使用时记得加随机数种子