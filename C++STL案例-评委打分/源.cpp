////--------��������-----------
////��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ͷ֣�ȡƽ����
////--------ʵ�ֲ���------------
////1.��������ѡ�֣��ŵ�vector������
////2.����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
////sort�㷨��deque�������������ۼ��ܷ�
////��ȡƽ����
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <deque>
//#include <ctime>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//	Person(string name, double score)
//	{
//		m_name = name;
//		m_score = score;
//	}
//	string m_name;
//	double m_score;
//};
//void createPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < nameSeed.size(); i++)
//	{
//		string str = "ѡ��";
//		str += nameSeed[i];
//		Person p(str, 0);
//		v.push_back(p);
//	}
//}
////���
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		//����ί�ķ��������뵽deque������
//		deque<int>d;
//		for (int i = 0; i < 10; ++i)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		
//		/*cout << "ѡ�֣� " << it->m_name << " ��֣�" << it->m_score << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); ++dit)
//		{
//			cout << *dit << " ";
//		}*/
//		//��������Ȼ��ȥ����߷���ͷ�
//		sort(d.begin(), d.end());
//		//βɾ
//		d.pop_back();
//		//ͷɾ
//		d.pop_front();
//		double sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); ++dit)
//		{
//			sum += *dit;
//		}
//		sum /= d.size();
//
//		it->m_score = sum;
//
//	}
//}
//class Print 
//{
//public:
//	void operator()(Person& p)const
//	{
//		cout << "������" << p.m_name << " ƽ���֣�" << p.m_score << endl;
//		//cout << p.m_name << p.m_score << endl;
//	}
//};
//void print(Person& p)
//{
//
//	cout << "������ " << p.m_name << " ƽ����" << p.m_score << endl;
//}
//void showScore(vector<Person>& v)
//{
//	for_each(v.begin(), v.end(), print);
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << "������ " << it->m_name << " ƽ����" << it->m_score << endl;
//	}*/
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	vector<Person>v;
//	createPerson(v);
//	setScore(v);
//
//	//��ʾ���÷�
//	showScore(v);
//	return 0;
//}