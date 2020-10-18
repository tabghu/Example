#include <iostream>
#include <stdlib.h>
#include "List.h"
#include "Node.h"
using namespace std;
int main()
{
	Node node1;
	node1.data = 1;
	Node node2;
	node2.data = 2;
	List *list1 = new List();
	list1->insertelem_tail(&node1);
	list1->insertelem_head(&node2);
	list1->printinfo();
	delete list1;
	list1 = NULL;
	system("pause");
	return 0;
}