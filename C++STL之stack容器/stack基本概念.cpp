//��ջ --- push
//��ջ --- pop
//����ջ�� --- top
//�ж�ջ�Ƿ�Ϊ�� -- empty
//����ջ��С --- size
#include <iostream>
#include <stack>
using namespace std;
void test()
{
	//����ջ���� ջ������������Ƚ����ԭ��
	stack<int> s;
	//��ջ�����Ԫ�أ����� ѹջ����ջ
	s.push(10);
	s.push(20);
	s.push(30);
	while (!s.empty())
	{
		//���ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
		//����ջ��Ԫ��
		s.pop();
	}
	cout << "ջ�Ĵ�СΪ�� " << s.size() << endl;
}

int main()
{
	test();
	return 0;
}