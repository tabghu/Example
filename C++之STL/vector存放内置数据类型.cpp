//������vector
//�㷨��for_each
//��������vector<int>::iteator
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void Myprint(int val)
{
	cout << val << endl;
}
void test01()
{
	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ���������
	vector<int> v;
	//�������д������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	//ÿһ�����������Լ��ĵ������� ���������������������е�Ԫ��
	//v.begin()���ص����������������ָ�������еĵ�һ��Ԫ��
	//v.end()���ص������� ���������ָ������Ԫ�ص����һ��Ԫ�ص���һλ��
	//vector<int>::iteator �õ�vector<int>���������ĵ���������

	vector<int>::iterator pBegin = v.begin();
	vector<int>::iterator pEnd = v.end();
	//��һ�ֱ�����ʽ
	cout << "��һ�ֱ�����ʽ" << endl;
	while (pBegin != pEnd)
	{
		cout << *pBegin << endl;
		pBegin++;
	}
	//�ڶ��ֱ�����ʽ
	cout << "�ڶ��ֱ�����ʽ" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;

	//�����ֱ�����ʽ
	cout << "�����ֱ�����ʽ" << endl;
	for_each(v.begin(), v.end(), Myprint);

}
int main()
{
	test01();
	return 0;
}
                                                                
