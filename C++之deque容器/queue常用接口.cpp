//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
////���������� ջ�������õĶ���ӿ�
////���캯���� queue<T> que		//queue����ģ����ʵ�֣�queue�����Ĭ����ʽ
////queue& operator=(const queue &que)
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//void test01()
//{
//	//��������
//	queue<Person> q;
//	//׼������
//	Person p1("��ɮ", 30);
//	Person p2("�����", 1000);
//	Person p3("��˽�", 900);
//	Person p4("ɳɮ", 800);
//	//��������Ԫ�أ���Ӳ���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	//���в��ṩ������������֧���������
//	while (!q.empty())
//	{
//		//�����ͷԪ��
//		cout << "��ͷԪ��-- ������ " << q.front().m_Name
//			<< " ���䣺 " << q.front().m_Age << endl;
//
//		//�����βԪ��
//		cout << "��βԪ��-- ������ " << q.back().m_Name
//			<< " ���䣺 " << q.back().m_Age << endl;
//		//������ͷԪ��
//		q.pop();
//	}
//	cout << "���д�СΪ�� " << q.size() << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}