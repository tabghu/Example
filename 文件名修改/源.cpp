#include <iostream>
#include <string>
#include <io.h>
#include <stdlib.h>
#include <vector>
using namespace std;
//string dirpath = "E:\\gmmbayestb-v1.0\\motionData\\clusterData\\walk\\";
string My_newname = "";

//�������·��
string dirpath = "D:\\�������ѧ\\";
//����Ѱ�ҵ��ַ���������ֵ����һ���� ����
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

	//������д��׺
	char suffixs[] = "*.avi";          //ҪѰ�ҵ��ļ�����


	vector<string> fileNameList;	//�ļ�����.avi�����ļ�����������
	char* p;
	p = (char*)malloc((dirpath.size() + 1) * sizeof(char));
	strcpy(p, dirpath.c_str());

	//��ȡ�ļ�������
	if ((lf = _findfirst(strcat(p, suffixs), &file)) == -1l)
	{
		cout << "�ļ�û���ҵ�!\n";
	}
	else
	{
		cout << "\n�ļ��б�:\n";
		do {
			cout << file.name << endl;
			//str�����������ļ������ַ���string
			string str(file.name);
			fileNameList.push_back(str);
			cout << endl;
		} while (_findnext(lf, &file) == 0);
	}
	_findclose(lf);

	//�����ļ����������������޸�
	//������ѡ������ļ����ĸ�ʽ
	string strAdd = ".avi";   //��ԭ�ļ����Ļ�����Ҫ���ӵĲ���
	for (vector<string>::iterator iter = fileNameList.begin(); iter != fileNameList.end(); ++iter)
	{
		string oldName = dirpath + *iter;
		//str1Ϊԭ�ļ���Ҫ�����Ĳ���
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