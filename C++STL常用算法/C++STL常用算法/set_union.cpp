//#include <iostream>
//#include <vector>
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
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//
//	}
//	vector<int> vTarget;
//	//ȡ���������ĺ͸�Ŀ���������ٿռ�
//	vTarget.resize(v1.size() + v2.size());
//	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}