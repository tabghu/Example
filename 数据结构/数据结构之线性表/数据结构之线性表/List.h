#pragma once
#include "Node.h"
/*
//初始化链表
//清空链表
//链表判空
//往链表中插入元素（头）
//往链表中插入元素（尾）
//取出任意位置的元素
//取出第i个位置的元素
//删除任意位置元素
//删除第i个位置的元素
// 在任意位置插入元素
//遍历链表
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

