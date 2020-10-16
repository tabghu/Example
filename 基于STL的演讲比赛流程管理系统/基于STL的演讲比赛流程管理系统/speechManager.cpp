#include "speechManager.h"
#include <algorithm>
#include <deque>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <functional>
using namespace std;
//�º���
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
	//��ʼ������
	this->initSpeech();
	//����ѡ��
	this->createSpeaker();
	//��ȡ�����¼
	this->loadRecord();
}
//չʾ�˵�����
void speechManager::show_Menu()
{
	cout << "*******************************" << endl;
	cout << "*********��ӭ�μ��ݽ�����*******" << endl;
	cout << "*********1.��ʼ�ݽ�����*********" << endl;
	cout << "*********2.�鿴�����¼*********" << endl;
	cout << "*********3.��ձ�����¼*********" << endl;
	cout << "*********0.�˳���������*********" << endl;
	cout << "*******************************" << endl;
	cout << endl;
}
//ʵ���˳�����
void speechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}
//��ʼ������12��ѡ��
void speechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		Speaker sp;
		sp.m_Name = name;
		for (int i = 0; i < 2; i++)
		{
			sp.m_Score[i] = 0;
		}
		//12��ѡ�ֱ��
		this->v1.push_back(i + 10001);
		//ѡ�ֱ�� �Լ���Ӧ��ѡ�� ��ŵ�map������
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}
//��ʼ���� - �������̿���
void speechManager::startSpeech()
{
	//��һ�ֱ���
	//1.��ǩ
	speechDraw();
	//2.����
	speechContest();
	//3.��ʾ�������
	showScore();
	//�ڶ��ֱ���
	this->m_Index++;
	//1.��ǩ
	speechDraw();
	//2.����
	speechContest();
	//3.��ʾ���ս��
	showScore();
	//4.�������
	saveRecord();
	//���ñ���
	this->initSpeech();
	//����ѡ��
	this->createSpeaker();
	//��ȡ�����¼
	this->loadRecord();
	cout << "�������������" << endl;
	system("pause");
	system("cls");
}
//����
void speechManager::speechContest()
{
	cout << "---------��" << this->m_Index << "�ֱ�����ʽ��ʼ :--------------" << endl;
	multimap<double, int, greater<int>>groupScore;		//��ʱ����������key������valueѡ�ֱ��
	int num = 0;	//��¼��Ա�飬6��Ϊһ��
	vector<int>v_src;	//��������Ա����
	if (this->m_Index == 1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}
	//�������в���ѡ��
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
		//ÿ����ƽ����
		//cout << "��ţ� " << *it << " ѡ��: " << this->m_Speaker[*it].m_Name << " ��ȡƽ���֣� " << avg << endl;
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;
		//6����һ�飬����ʱ��������
		groupScore.insert(make_pair(avg, *it));
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С���������" << endl;
			for (multimap<double, int, greater<int>>::iterator it = groupScore.begin(); it != groupScore.end(); ++it)
			{
				cout << "���: " << it->second << " ���� " << this->m_Speaker[it->second].m_Name << " �ɼ���"
					<< this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}
			int count = 0;
			//ȡǰ����
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
	cout << "-------------------��" << this->m_Index << "�ֱ������ ---------------------" << endl;
	system("pause");
}
//��ǩ
void speechManager::speechDraw()
{
	cout << "��<<" << this->m_Index << ">>�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "-----------------------------" << endl;
	cout << "��ǩ���ݽ�˳������: " << endl;
	if (this->m_Index == 1)
	{
		//����ϴ���㷨����˳��
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
//��ʾ����
void speechManager::showScore()
{
	cout << "----------------��" << this->m_Index << "�ֽ���ѡ����Ϣ���£� ---------------" << endl;
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
		cout << "ѡ�ֱ�ţ� " << *it << " ������" << m_Speaker[*it].m_Name << " �÷�: " 
			 << m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}
//�����¼
void speechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);	//������ķ�ʽ���ļ�, -- д�ļ�

	//��ÿ��������д���ļ���
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	//�ر��ļ�
	ofs.close();
	cout << "��¼�Ѿ�����" << endl;
	this->fileIsEmpty = false;
}
//��ȡ��¼
void speechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "�ļ������ڣ�" << endl;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��!" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ���Ϊ��
	this->fileIsEmpty = false;
	ifs.putback(ch);	//����ȡ�ĵ����ַ��Ż�
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
			pos = data.find(",", start);	//��0��ʼ����','
			if (pos == -1)
			{
				break;	//�Ҳ���break����
			}
			string temp = data.substr(start, pos - start);	//�ҵ��ˣ����зָ����1 ��ʼλ�ã�����2 ��ȡ����
			v.push_back(temp);
			start = pos + 1;

		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
}
//�鿴����÷�
void speechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ������ڣ����¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "�� " << i + 1 << "��"
				<< "�ھ����: " << this->m_Record[i][0] << "�÷�" << this->m_Record[i][1]
				<< "�Ǿ����: " << this->m_Record[i][2] << "�÷�" << this->m_Record[i][3]
				<< "�������: " << this->m_Record[i][4] << "�÷�" << this->m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}
//��ռ�¼
void speechManager::clearRecord()
{
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//��ģʽios::trunc �������ɾ���ļ������´���
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		//��ʼ������
		this->initSpeech();
		//����ѡ��
		this->createSpeaker();
		//��ȡ�����¼
		this->loadRecord();

		cout << "��ռ�¼! " << endl;
	}
	system("pause");
	system("cls");
}
//��ʼ������
void speechManager::initSpeech()
{
	//������֤Ϊ��
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	//��ʼ����������
	this->m_Index = 1;
	this->m_Record.clear();
}
speechManager::~speechManager()
{

}