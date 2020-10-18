#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
	p_list = new Node();
	p_list->data = 0;
	p_list->next = NULL;
	m_length = 0;
}

void List::InitalizeList()
{

}
bool List::empty_List()
{
	if (m_length == 0)
		return true;
	return false;
}
bool List::insertelem_tail(Node *elem)
{
	/*Node *node = new Node();
	Node *p_node = new Node();
	node = p_list->next;
	while (node != NULL)
	{
		p_node = node;
		node = node->next;
	}
	node->data = elem->data; 
	p_node->next = node;
	node->next = NULL;
	m_length++;
	return true;*/
	Node  *node = p_list;
	Node *p_node = new Node();
	while (node->next != NULL)
	{
		node = node->next;
	}
	p_node->data = elem->data;
	p_node->next = NULL;
	node->next = p_node;
	m_length++;
	return true;
}
bool List::insertelem_head(Node *elem)
{
	Node *pnode;
	pnode = p_list->next;
	p_list->next = elem;
	elem->next = pnode;
	m_length++;
	return true;

}
int List::GetLength()
{
	return m_length;
}
void List::printinfo()
{
	Node *pnode = new Node();
	pnode = p_list->next;
	while (pnode != NULL)
	{
		cout << pnode->data << endl;
		pnode = pnode->next;
	}
	cout << GetLength() << endl;
}
List::~List()
{
	delete p_list;
	p_list = NULL;
}
