//#include <iostream>
//#include <vector>
////vector& operator=(const vector& vec);	//���صȺŲ�����
////assign(beg, end);		//��[beg,end]�����е����ݿ�����ֵ������
////assign(n,elem);		//��n��elem������ֵ������
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
////��ֵ����
//void test()
//{
//	vector<int> v1;		//�޲ι���
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
////�ܽ�: vector��ֵ��ʽ�Ƚϼ򵥣�ʹ��operator=  ����assign������