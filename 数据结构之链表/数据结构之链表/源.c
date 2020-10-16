#include <stdio.h>
#include <stdlib.h>
//创建节点结构体
typedef struct Node
{
	int data;
	struct Node* next;
}Node;
//创建头节点
Node createHead()
{
	Node node = { -1, NULL };
	return node;
}
//创建节点
Node* createNode( int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	if (node)
	{
		node->data = data;
		node->next = NULL;
		return node;
	}
}
//尾插法插入节点
void insertBytail(const Node* head, const Node* node)
{
	Node* pnode = head;
	while (pnode->next)
	{
		pnode = pnode->next;
	}
	pnode->next = node;
}
//在指定位置插入节点
int insert_elem_loc(Node* head, Node* node ,unsigned int loc)
{
	Node* phead = head;
	loc -= 1;
	while (loc--)
	{
		phead = phead->next;
	}
	node->next = phead->next;
	phead->next = node;
	return 0;
}
//打印节点信息
int printInfo(Node* head)
{
	if (!head)
	{
		return -1;
	}
	Node* phead = head->next;
	while (phead)
	{
		printf("%d -> ", phead->data);
		phead = phead->next;
	}
	printf("\n");
	return 0;
}
int delete_elem_Val(Node* head, const int val)
{
	if (head)
	{
		//Node* phead = head->next;
		//while (phead)
		//{
		//	if (phead->data == val)
		//	{
		//		//找到删除节点
		//		phead->data = phead->next->data;
		//		Node* temp = phead->next;
		//		phead->next = phead->next->next;
		//		free(temp);
		//		return 0;
		//	}
		//	phead = phead->next;
		//}

		Node* ppre = head;
		Node* phead = head->next;
		while (phead)
		{
			if (phead->data == val)
			{
				ppre->next = phead->next;
				free(phead);
				head = NULL;
				return 0;
			}
			ppre = phead;
			phead = phead->next;
		}
		
	}
	return -1;
}
int delete_elem_Loc(Node* head,  unsigned int loc)
{
	Node* phead = head;
	while (loc--)
	{
		if (!phead)
		{
			break;
		}
		phead = phead->next;
	}
	//做删除
	if (phead)
	{
		phead->data = phead->next->data;
		Node* temp = phead->next;
		phead->next = phead->next->next;
		free(temp);
		return 0;
	}
	return -1;

}
void deleteList(Node* head)
{
	while (head->next)
	{
		Node* phead = head->next;
		head->next = phead->next;
		free(phead);
		phead = NULL;
	}
}
void test()
{
	//创建头指针
	Node* head = (Node*)malloc(sizeof(Node));
	Node node = createHead();
	head = &node;
	Node* node1 = createNode(2);
	Node* node2 = createNode(3);
	Node* node3 = createNode(5);
	Node* node4 = createNode(4);
	Node* node5 = createNode(1);

	insertBytail(head, node1);
	insertBytail(head, node2);
	insertBytail(head, node3);
	insertBytail(head, node4);
	printInfo(head);
	//delete_elem_Val(head, 4);
	//delete_elem_Loc(head, 4);
	insert_elem_loc(head, node5, 1);
	printInfo(head);
	deleteList(head);
	//printInfo(head);
	//free(head);
	printInfo(head);
	free(head);
}
int main()
{
	test();
	return 0;
}