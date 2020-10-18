////--------案例描述-----------
////有5名选手：选手ABCDE，10名评委分别对每一名选手打分，去除最高分，去除最低分，取平均分
////--------实现步骤------------
////1.创建五名选手，放到vector容器中
////2.遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
////sort算法对deque容器分数排序，累加总分
////获取平均分
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
//		string str = "选手";
//		str += nameSeed[i];
//		Person p(str, 0);
//		v.push_back(p);
//	}
//}
////打分
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		//将评委的分数，放入到deque容器中
//		deque<int>d;
//		for (int i = 0; i < 10; ++i)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		
//		/*cout << "选手： " << it->m_name << " 打分：" << it->m_score << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); ++dit)
//		{
//			cout << *dit << " ";
//		}*/
//		//进行排序，然后去除最高分最低分
//		sort(d.begin(), d.end());
//		//尾删
//		d.pop_back();
//		//头删
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
//		cout << "姓名：" << p.m_name << " 平均分：" << p.m_score << endl;
//		//cout << p.m_name << p.m_score << endl;
//	}
//};
//void print(Person& p)
//{
//
//	cout << "姓名： " << p.m_name << " 平均分" << p.m_score << endl;
//}
//void showScore(vector<Person>& v)
//{
//	for_each(v.begin(), v.end(), print);
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << "姓名： " << it->m_name << " 平均分" << it->m_score << endl;
//	}*/
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	vector<Person>v;
//	createPerson(v);
//	setScore(v);
//
//	//显示最后得分
//	showScore(v);
//	return 0;
//}