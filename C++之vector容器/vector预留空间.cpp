////����vector�ڶ�̬��չ����ʱ����չ����
////reserve(int len)	//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void test()
//{
//	vector<int>v;
//	//Ԥ���ռ�
//	v.reserve(100000);
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "num: " << num << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}