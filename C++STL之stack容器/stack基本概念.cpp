//入栈 --- push
//出栈 --- pop
//返回栈顶 --- top
//判断栈是否为空 -- empty
//返回栈大小 --- size
#include <iostream>
#include <stack>
using namespace std;
void test()
{
	//创建栈容器 栈容器必须符合先进后出原则
	stack<int> s;
	//向栈中添加元素，叫做 压栈，入栈
	s.push(10);
	s.push(20);
	s.push(30);
	while (!s.empty())
	{
		//输出栈顶元素
		cout << "栈顶元素为： " << s.top() << endl;
		//弹出栈顶元素
		s.pop();
	}
	cout << "栈的大小为： " << s.size() << endl;
}

int main()
{
	test();
	return 0;
}