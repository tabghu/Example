//#include <iostream>
//#include <functional>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////���ñ����㷨������transform
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
//	vector<int>vTarget;		//Ŀ������
//
//	vTarget.resize(v.size());	//Ŀ��������Ҫ��ǰ���ٿռ�
//	transform(v.begin(), v.end(), vTarget.begin(), TransForm());
//
//	for_each(vTarget.begin(), vTarget.end(), Myprint());
//}
//int main()
//{
//	test();
//	return 0;
//}
////���˵�Ŀ������������Ҫ��ǰ���ٿռ䣬�����޷���������