//#include <iostream>
//using namespace std;
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//���븨��
//	virtual void PutSomeThing() = 0;
//	//�涨����
//	void MakeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomeThing();
//	}
//};
////��������
//class Coffee : public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ�� " << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ��ȣ�" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "�����ȵ��뱭�У�" << endl;
//	}
//	virtual void PutSomeThing()
//	{
//		cout << "����ţ��" << endl;
//	}
//};
////������ˮ
//class Tea : public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "������ˮ��" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ��" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << " ����ˮ���뱭�У�" << endl;
//	}
//	//���븨��
//	virtual void PutSomeThing()
//	{
//		cout << "������轣�" << endl;
//	}
//};
////ҵ����
//void DoWork(AbstractDrinking* drink)
//{
//	drink->MakeDrink();
//	delete drink;
//}
//void test()
//{
//	DoWork(new Coffee);
//	cout << "-------------------------" << endl;
//	DoWork(new Tea);
//}
//int main()
//{
//	test();
//	return 0;
//}