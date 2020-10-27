#include <iostream>
#include <string>
#include <io.h>
#include <stdlib.h>
#include <vector>
using namespace std;
//string dirpath = "E:\\gmmbayestb-v1.0\\motionData\\clusterData\\walk\\";
string My_newname = "";

//这里添加路径
string dirpath = "D:\\基础会计学\\";
//用来寻找到字符串倒序出现的最后一个（ 括号
int My_delete(string str)
{
	int fin = 0;
	for (int i = str.size() - 1; i >= 0; i--)
	{
		if (str[i] == '(')
		{
			fin = i;
			break;
		}
	}
	return  fin;
}
int main()
{
	_finddata_t file;
	long lf;

	//这里填写后缀
	char suffixs[] = "*.avi";          //要寻找的文件类型


	vector<string> fileNameList;	//文件夹下.avi类型文件的名字向量
	char* p;
	p = (char*)malloc((dirpath.size() + 1) * sizeof(char));
	strcpy(p, dirpath.c_str());

	//获取文件名向量
	if ((lf = _findfirst(strcat(p, suffixs), &file)) == -1l)
	{
		cout << "文件没有找到!\n";
	}
	else
	{
		cout << "\n文件列表:\n";
		do {
			cout << file.name << endl;
			//str是用来保存文件名的字符串string
			string str(file.name);
			fileNameList.push_back(str);
			cout << endl;
		} while (_findnext(lf, &file) == 0);
	}
	_findclose(lf);

	//遍历文件名向量，并进行修改
	//在这里选择输出文件名的格式
	string strAdd = ".avi";   //在原文件名的基础上要增加的部分
	for (vector<string>::iterator iter = fileNameList.begin(); iter != fileNameList.end(); ++iter)
	{
		string oldName = dirpath + *iter;
		//str1为原文件名要保留的部分
		string str1;
		str1 = (*iter).substr(0, My_delete((*iter)));
		string newName = dirpath + str1 + strAdd;
		cout << "oldName:" << oldName << endl;
		cout << "newName" << newName << endl;

		cout << "oldName size = " << oldName.size() << endl;
		cout << "newName size = " << newName.size() << endl;

		char* oldNamePointer, * newNamePointer;
		oldNamePointer = (char*)malloc((oldName.size() + 1) * sizeof(char));
		newNamePointer = (char*)malloc((newName.size() + 1) * sizeof(char));
		strcpy(oldNamePointer, oldName.c_str());
		strcpy(newNamePointer, newName.c_str());
		cout << oldNamePointer << endl;
		cout << newNamePointer << endl;

		rename(oldNamePointer, newNamePointer);

		free(oldNamePointer);
		free(newNamePointer);
	}
	system("PAUSE");
	return 0;
}