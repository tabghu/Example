////功能：
////vector数据结构和数组非常相似，也称为单端数组
////vector与普通数组区别
////不同之处在于数组是静态空间，而vector可以动态扩展
//
////动态扩展
////并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间
////vector容器的迭代器是支持随机访问的迭代器
//
////vector构造函数
////创建vector容器
//
//#include <iostream>
//#include <vector>
//using namespace  std;
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int> v1;	//无参构造
//	for (int i = 0; i < 10; ++i)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	vector<int> v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	vector<int> v3(10, 100);
//	printVector(v3);
//
//	vector<int>v4(v3);
//	printVector(v4);
//}
//int main()
//{
//	test01();
//	return 0;
//}
//
