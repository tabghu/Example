#pragma once
#include "Node.h"
/*
//��ʼ������
//�������
//�����п�
//�������в���Ԫ�أ�ͷ��
//�������в���Ԫ�أ�β��
//ȡ������λ�õ�Ԫ��
//ȡ����i��λ�õ�Ԫ��
//ɾ������λ��Ԫ��
//ɾ����i��λ�õ�Ԫ��
// ������λ�ò���Ԫ��
//��������
*/


class List
{
public:
	List();
	void InitalizeList();
	bool empty_List();
	bool insertelem_tail(Node *elem);
	bool insertelem_head(Node *elem);
	int GetLength();
	void printinfo();
	~List();
private:
	Node *p_list;
	int m_length;
};

