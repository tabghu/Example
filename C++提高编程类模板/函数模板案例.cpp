//#include <iostream>
//using namespace std;
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//template<typename T>	//Ҳ�����滻��typename
////����ѡ�����򣬽��������С���������
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;	//��������±�
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)	//�����������±���i����������
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//template<typename T>	//Ҳ�����滻��typename
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
//	//����char����
//	char charArray[] = "bdcfeagh";
//	int num = sizeof(charArray) / sizeof(char);
//	cout << "num  = " << num << endl;
//	mySort(charArray, num);
//	printArray(charArray, num);
//}
//void test02()
//{
//	//����int����
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