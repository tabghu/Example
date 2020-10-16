#pragma once
//设计管理类
#include <iostream>
#include <vector>
#include <map>
#include "Speaker.h"
using namespace std;
class speechManager
{
public:
	//构造函数
	speechManager();
	//展示菜单功能
	void show_Menu();
	//实现退出功能
	void exitSystem();
	//初始化属性
	void initSpeech();
	//初始化创建12名选手
	void createSpeaker();
	//保存记录
	void saveRecord();
	//开始比赛 - 比赛流程控制 
	void startSpeech();
	//读取记录
	void loadRecord();
	//查看往届得分
	void showRecord();
	//显示比赛
	void showScore();
	//比赛
	void speechContest();
	//抽签
	void speechDraw();
	//清空记录
	void clearRecord();
	//~析构函数
	~speechManager();
public:
	//比赛选手
	vector<int> v1;
	//文件为空的标志
	bool fileIsEmpty;
	//往届记录
	map<int, vector<string>> m_Record;
	//第一轮晋级容器		6人
	vector<int> v2;
	//胜利前三名容器
	vector<int> vVictory;
	//存放编号，以及对应的具体选手容器
	map<int, Speaker> m_Speaker;
	int m_Index;
};

