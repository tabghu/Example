#pragma once
//将worker类作为抽象基类
#include <iostream>
using namespace std;
#include <string>

class Worker
{
public:
	//显示个人信息
	//声明为纯虚函数，因为要使用多态来进行处理
	virtual void showInfo() = 0;
	//获取岗位名称
	virtual string getDeptName() = 0;
	
	//成员属性
	int  m_Id;		//职工编号
	string m_Name;	//职工姓名
	int m_DeptId;	//职工所在部门名称编号
};

