////��vector�����������ʹ�С����
//
////����ԭ��
////empty();		//�ж������Ƿ�Ϊ��
////capacity();	//��������
////size();		//���������е�Ԫ��
////resize(int num);		//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
////resize(int num, elem);	//����ָ�������ĳ���Ϊnun���������䳤������elemֵ�����λ��
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
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
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1 ��Ϊ��" << endl;
//		cout << "v1������" << vec.capacity() << endl;
//		cout << "v1�Ĵ�С" << vec.size() << endl;
//	}
//
//	//resize ����ָ����С����ָ���ĸ���Ĭ����0 �����λ�ã������������ذ汾�滻Ĭ�����
//
//	vec.resize(15, 20);
//	printVector(vec);
//	//resize����ָ����С ��ָ���ĸ�С����������Ԫ�ر�ɾ��
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
////�ж��Ƿ�Ϊ��--- empty()
////����Ԫ�ظ���--- size()
////������������--- capacity()
////����ָ����С--- resize()a