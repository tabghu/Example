#pragma once
#include "Worker.h"
#include <fstream>
#define FILENAME "emFile.txt"
class WorkerManager
{
public:
	//���캯��
	WorkerManager();
	//��ʾ�˵�
	void ShowMenu();
	//���ְ����Ϣ
	void Add_Employ();
	//�˳�ϵͳ
	void Exit_Sys();
	//��ʾְ����Ϣ
	void Display_Employ();
	//ɾ��ְ����Ϣ
	void Del_Employ();
	//�޸�ְ����Ϣ
	void Updata_Employ();
	//����ְ����Ϣ��
	void Search_Employ();
	//���ձ������
	void Sort_Employ();
	//��������ĵ�
	void Clear_All();

	//�ļ����� д�ļ�
	void save();
	//ͳ������
	int get_EmpNum();
	//��������

	//��ʼ�����飬Ҫ���ļ��е������������ʾ����
	void Init_Emp();
	//�жϴ�Ա���Ƿ����
	int IsExist(int id);
	~WorkerManager();
private:
	//��¼ϵͳ��Ա������
	int m_EmpNum;
	//����Ҫʹ�ö���ָ�� ��Ϊ������Ҫ����һ��ָ������ ������������
	//���ݶ���worker���͵�ָ�룬��Ϊ����Ҫʹ�ö�̬������ʱ�������ж����ѡ������������ͳһʹ��
	//����ָ����ָ��������󣬵���������Ϊָ�����飬����������Ҫ�ö���ָ�������п���
	Worker** m_EmpArray;
	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
};

