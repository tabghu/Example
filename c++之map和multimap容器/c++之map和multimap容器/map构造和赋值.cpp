//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//void printMap(const map<int, int>& m)
//{
//	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;		//默认构造
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	printMap(m);
//
//	map<int, int>m2(m);	//拷贝构造
//	printMap(m2);
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//}
//int main()
//{
//	test01();
//	return 0;
//}
////总结: map中所有元素都是成对出现，插入数据时候要使用对组