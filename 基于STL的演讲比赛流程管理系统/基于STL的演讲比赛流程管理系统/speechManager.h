#pragma once
//��ƹ�����
#include <iostream>
#include <vector>
#include <map>
#include "Speaker.h"
using namespace std;
class speechManager
{
public:
	//���캯��
	speechManager();
	//չʾ�˵�����
	void show_Menu();
	//ʵ���˳�����
	void exitSystem();
	//��ʼ������
	void initSpeech();
	//��ʼ������12��ѡ��
	void createSpeaker();
	//�����¼
	void saveRecord();
	//��ʼ���� - �������̿��� 
	void startSpeech();
	//��ȡ��¼
	void loadRecord();
	//�鿴����÷�
	void showRecord();
	//��ʾ����
	void showScore();
	//����
	void speechContest();
	//��ǩ
	void speechDraw();
	//��ռ�¼
	void clearRecord();
	//~��������
	~speechManager();
public:
	//����ѡ��
	vector<int> v1;
	//�ļ�Ϊ�յı�־
	bool fileIsEmpty;
	//�����¼
	map<int, vector<string>> m_Record;
	//��һ�ֽ�������		6��
	vector<int> v2;
	//ʤ��ǰ��������
	vector<int> vVictory;
	//��ű�ţ��Լ���Ӧ�ľ���ѡ������
	map<int, Speaker> m_Speaker;
	int m_Index;
};

