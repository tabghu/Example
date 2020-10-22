////对vector容器的容量和大小操作
//
////函数原型
////empty();		//判断容器是否为空
////capacity();	//容器容量
////size();		//返回容器中的元素
////resize(int num);		//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
////resize(int num, elem);	//重新指定容器的长度为nun，若容器变长，则以elem值填充新位置
////如果容器变短，则末尾超出容器长度的元素被删除
//
//#include <iostream>
//#include <vector>
//using namespace std;
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int> vec;
//	for (int i = 0; i < 10; ++i)
//	{
//		vec.push_back(i);
//	}
//	printVector(vec);
//	if (vec.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1 不为空" << endl;
//		cout << "v1的容量" << vec.capacity() << endl;
//		cout << "v1的大小" << vec.size() << endl;
//	}
//
//	//resize 重新指定大小，若指定的更大，默认用0 填充新位置，可以利用重载版本替换默认填充
//
//	vec.resize(15, 20);
//	printVector(vec);
//	//resize重新指定大小 若指定的更小，超出部分元素被删除
//	vec.resize(5);
//	printVector(vec);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
////判断是否为空--- empty()
////返回元素个数--- size()
////返回容量个数--- capacity()
////重新指定大小--- resize()a