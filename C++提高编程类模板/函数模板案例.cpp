//#include <iostream>
//using namespace std;
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//template<typename T>	//也可以替换成typename
////利用选择排序，进行数组从小到大的排序
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;	//最大数的下标
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)	//如果最大数的下标是i，交换两者
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//template<typename T>	//也可以替换成typename
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//测试char数组
//	char charArray[] = "bdcfeagh";
//	int num = sizeof(charArray) / sizeof(char);
//	cout << "num  = " << num << endl;
//	mySort(charArray, num);
//	printArray(charArray, num);
//}
//void test02()
//{
//	//测试int数组
//	int int_array[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
//	int num = sizeof(int_array) / sizeof(int);
//	mySort(int_array, num);
//	printArray(int_array, num);
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}