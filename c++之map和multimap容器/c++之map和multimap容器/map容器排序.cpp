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
//	//Ĭ�ϴ�С��������
//	//���÷º���ʵ�ִӴ�С����
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
////���÷º�������ָ��map�������������
////�����Զ����������ͣ�map����Ҫָ���������ͬset����