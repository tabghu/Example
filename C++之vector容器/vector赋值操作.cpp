//#include <iostream>
//#include <vector>
////vector& operator=(const vector& vec);	//重载等号操作符
////assign(beg, end);		//将[beg,end]区间中的数据拷贝赋值给本身
////assign(n,elem);		//将n个elem拷贝赋值给本身
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void prinVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////赋值操作
//void test()
//{
//	vector<int> v1;		//无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	prinVector(v1);
//	vector<int> v2;
//	v2 = v1;
//	prinVector(v2);
//
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	prinVector(v3);
//
//	vector<int>v4;
//	v4.assign(10, 100);
//	prinVector(v4);
//}
//int main()
//{
//	test();
//	return 0;
//}
////总结: vector赋值方式比较简单，使用operator=  或者assign都可以