//#include <iostream>
//#include <string>
//using namespace std;
//
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->mName = name;
//		this->mAge = age;
//	}
//	void showPerson()
//	{
//		cout << "name : " << mName << "\t aeg : " << this->mAge << endl;
//	}
//public:
//	NameType mName;
//	AgeType mAge;
//};
//
////��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//void test()
//{
//
//	Person<string, int>p1("�����", 999);	//����ʹ����ʾָ�����͵ķ�ʽ��ʹ����ģ��
//	p1.showPerson();
//	Person<string>p2("��˽�", 1000);		//��ģ���е�ģ������б� ����ָ��Ĭ�ϲ���
//	p2.showPerson();
//}
//int main()
//{
//	test();
//	return 0;
//}