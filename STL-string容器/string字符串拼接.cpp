//#include <iostream>
//#include <string>
//using namespace std;
////string& operator+=(const char* str);	//重载+= 操作符
////string& operator+=(const char c);		//重载+= 操作符
////string& operator+=(const string& str);	//重载+= 操作符
////string& append(const char* s);			//把字符串s连接到当前字符串结尾
////string& append(const char* s, int n);	//把字符串的前n个字符赋给当前的字符串
////string& append(const string& s);		//把字符串s赋给当前字符串
////string& append(int n, char c);			//用n个字符赋给当前字符串
//
//void test01()
//{
//	string str1 = "我";
//	str1 += "爱玩游戏";
//	cout << "str1 = " << str1 << endl;
//	str1 += ":";
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = "LOL DNF";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//
//	string str3 = "I";
//	str3.append(" love ");
//	str3.append("game abcde", 4);
//	//str3.append(str2);
//	cout << "str3 = " << str3 << endl;
//	//lol dnf str3 = i love game
//	str3.append(str2, 4, 3);	//从下标4位置开始， 截取3个字符，拼接到字符串末尾
//	cout << "str3 = " << str3 << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}