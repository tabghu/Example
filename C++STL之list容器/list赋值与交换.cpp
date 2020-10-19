//#include <iostream>
//#include <list>
//using namespace std;
//void printList(list<int>& L)
//{
//	for (list<int>::iterator it = L.begin(); it != L.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////赋值和交换
//void test()
//{
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	printList(l1);
//
//	//赋值
//	list<int>l2;
//	l2 = l1; 
//	printList(l2);
//	
//	list<int>l3;
//	l3.assign(l2.begin(), l2.end());
//	printList(l3);
//
//	list<int>l4;
//	l4.assign(10, 100);
//	printList(l4);
//}
////交换
//void test02()
//{
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	list<int> l2;
//	l2.assign(10, 100);
//	
//	cout << "交换前： " << endl;
//	printList(l1);
//	printList(l2);
//	cout << endl;
//	l1.swap(l2);
//	cout << "交换后： " << endl;
//	printList(l1);
//	printList(l2);
//
//}
//int main()
//{
//	//test();
//	test02();
//	return 0;
//}
////list赋值和交换操作能够灵活运用