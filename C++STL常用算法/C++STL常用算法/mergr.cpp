//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val  << " ";
//	}
//};
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; ++i)
//	{
//		v1.push_back(i);
//		v2.push_back(i+1);
//	}
//	vector<int> vtarget;
//	//Ŀ��������Ҫ��ǰ���ٿռ�
//	vtarget.resize(v1.size() + v2.size());
//	//�ϲ� ��Ҫ������������
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
//	for_each(vtarget.begin(), vtarget.end(), myPrint());
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}