#pragma once
#include "Worker.h"
#include <fstream>
#define FILENAME "emFile.txt"
class WorkerManager
{
public:
	//构造函数
	WorkerManager();
	//显示菜单
	void ShowMenu();
	//添加职工信息
	void Add_Employ();
	//退出系统
	void Exit_Sys();
	//显示职工信息
	void Display_Employ();
	//删除职工信息
	void Del_Employ();
	//修改职工信息
	void Updata_Employ();
	//查找职工信息、
	void Search_Employ();
	//按照编号排序
	void Sort_Employ();
	//清空所有文档
	void Clear_All();

	//文件交互 写文件
	void save();
	//统计人数
	int get_EmpNum();
	//析构函数

	//初始化数组，要将文件中的数据输出到显示器上
	void Init_Emp();
	//判断此员工是否存在
	int IsExist(int id);
	~WorkerManager();
private:
	//记录系统中员工数量
	int m_EmpNum;
	//这里要使用二级指针 因为我们需要开辟一个指针数组 该数组中所有
	//内容都是worker类型的指针，因为我们要使用多态的运行时绑定来进行对象的选择，所以在这里统一使用
	//父类指针来指向子类对象，但由于数组为指针数组，所以我们需要用二级指针来进行开辟
	Worker** m_EmpArray;
	//标志文件是否为空
	bool m_FileIsEmpty;
};

