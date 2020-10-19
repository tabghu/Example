//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
////一元谓词
//struct GreateFive {
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; ++i)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreateFive());
//	if (it == v.end())
//	{
//		cout << "没找到！" << endl;
//	}
//	else
//	{
//		cout << "找到： " << *it << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}
////总结只有一个的谓词， 称为一元谓词