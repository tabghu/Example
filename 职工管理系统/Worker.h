#pragma once
//��worker����Ϊ�������
#include <iostream>
using namespace std;
#include <string>

class Worker
{
public:
	//��ʾ������Ϣ
	//����Ϊ���麯������ΪҪʹ�ö�̬�����д���
	virtual void showInfo() = 0;
	//��ȡ��λ����
	virtual string getDeptName() = 0;
	
	//��Ա����
	int  m_Id;		//ְ�����
	string m_Name;	//ְ������
	int m_DeptId;	//ְ�����ڲ������Ʊ��
};

