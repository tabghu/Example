#include "speechManager.h"
#include <algorithm>
#include <deque>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <functional>
using namespace std;
//仿函数
class Myprint
{
public:
	void operator()(int val) const
	{
		cout << val << " ";
	}
};
speechManager::speechManager()
{
	//初始化属性
	this->initSpeech();
	//创建选手
	this->createSpeaker();
	//获取往届记录
	this->loadRecord();
}
//展示菜单功能
void speechManager::show_Menu()
{
	cout << "*******************************" << endl;
	cout << "*********欢迎参加演讲比赛*******" << endl;
	cout << "*********1.开始演讲比赛*********" << endl;
	cout << "*********2.查看往届记录*********" << endl;
	cout << "*********3.清空比赛记录*********" << endl;
	cout << "*********0.退出比赛程序*********" << endl;
	cout << "*******************************" << endl;
	cout << endl;
}
//实现退出功能
void speechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}
//初始化创建12名选手
void speechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];
		Speaker sp;
		sp.m_Name = name;
		for (int i = 0; i < 2; i++)
		{
			sp.m_Score[i] = 0;
		}
		//12名选手编号
		this->v1.push_back(i + 10001);
		//选手编号 以及对应的选手 存放到map容器中
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}
//开始比赛 - 比赛流程控制
void speechManager::startSpeech()
{
	//第一轮比赛
	//1.抽签
	speechDraw();
	//2.比赛
	speechContest();
	//3.显示晋级结果
	showScore();
	//第二轮比赛
	this->m_Index++;
	//1.抽签
	speechDraw();
	//2.比赛
	speechContest();
	//3.显示最终结果
	showScore();
	//4.保存分数
	saveRecord();
	//重置比赛
	this->initSpeech();
	//创建选手
	this->createSpeaker();
	//获取往届记录
	this->loadRecord();
	cout << "本届比赛结束！" << endl;
	system("pause");
	system("cls");
}
//比赛
void speechManager::speechContest()
{
	cout << "---------第" << this->m_Index << "轮比赛正式开始 :--------------" << endl;
	multimap<double, int, greater<int>>groupScore;		//临时容器，保存key分数，value选手编号
	int num = 0;	//记录人员组，6个为一组
	vector<int>v_src;	//比赛的人员容器
	if (this->m_Index == 1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}
	//遍历所有参赛选手
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); ++it)
	{
		num++;
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double	score = (rand() % 401 + 600) / 10.f;	//600-1000
			//cout << score << " ";
			d.push_back(score);
		}
		sort(d.begin(), d.end(), greater<double>());
		d.pop_front();
		d.pop_back();
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();
		//每个人平均分
		//cout << "编号： " << *it << " 选手: " << this->m_Speaker[*it].m_Name << " 获取平均分： " << avg << endl;
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;
		//6个人一组，用临时容器保存
		groupScore.insert(make_pair(avg, *it));
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛名次" << endl;
			for (multimap<double, int, greater<int>>::iterator it = groupScore.begin(); it != groupScore.end(); ++it)
			{
				cout << "编号: " << it->second << " 姓名 " << this->m_Speaker[it->second].m_Name << " 成绩："
					<< this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}
			int count = 0;
			//取前三名
			for (multimap<double, int, greater<int>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; ++it, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}
			groupScore.clear();
			cout << endl;
		}
	}
	cout << "-------------------第" << this->m_Index << "轮比赛完毕 ---------------------" << endl;
	system("pause");
}
//抽签
void speechManager::speechDraw()
{
	cout << "第<<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;
	cout << "-----------------------------" << endl;
	cout << "抽签后演讲顺序如下: " << endl;
	if (this->m_Index == 1)
	{
		//利用洗牌算法打乱顺序
		random_shuffle(v1.begin(), v1.end());
		for_each(v1.begin(), v1.end(),Myprint());
		cout << endl;
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());
		for_each(v2.begin(), v2.end(), Myprint());
		cout << endl;
	}
	cout << "-----------------------------" << endl;
	system("pause");
	cout << endl;
}
//显示分数
void speechManager::showScore()
{
	cout << "----------------第" << this->m_Index << "轮晋级选手信息如下： ---------------" << endl;
	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << "选手编号： " << *it << " 姓名：" << m_Speaker[*it].m_Name << " 得分: " 
			 << m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}
//保存记录
void speechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);	//用输出的方式打开文件, -- 写文件

	//将每个人数据写到文件中
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	//关闭文件
	ofs.close();
	cout << "记录已经保存" << endl;
	this->fileIsEmpty = false;
}
//读取记录
void speechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "文件不存在！" << endl;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空!" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件不为空
	this->fileIsEmpty = false;
	ifs.putback(ch);	//将读取的单个字符放回
	string data;
	int index = 0;
	while (ifs >> data)
	{
		//cout << data << endl;
		vector<string> v;
		int pos = -1;
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);	//从0开始查找','
			if (pos == -1)
			{
				break;	//找不到break返回
			}
			string temp = data.substr(start, pos - start);	//找到了，进行分割，参数1 起始位置，参数2 截取长度
			v.push_back(temp);
			start = pos + 1;

		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
}
//查看往届得分
void speechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "文件不存在，或记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "第 " << i + 1 << "届"
				<< "冠军编号: " << this->m_Record[i][0] << "得分" << this->m_Record[i][1]
				<< "亚军编号: " << this->m_Record[i][2] << "得分" << this->m_Record[i][3]
				<< "季军编号: " << this->m_Record[i][4] << "得分" << this->m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}
//清空记录
void speechManager::clearRecord()
{
	cout << "确认清空？" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//打开模式ios::trunc 如果存在删除文件并重新创建
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		//初始化属性
		this->initSpeech();
		//创建选手
		this->createSpeaker();
		//获取往届记录
		this->loadRecord();

		cout << "清空记录! " << endl;
	}
	system("pause");
	system("cls");
}
//初始化属性
void speechManager::initSpeech()
{
	//容器保证为空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	//初始化比赛轮数
	this->m_Index = 1;
	this->m_Record.clear();
}
speechManager::~speechManager()
{

}