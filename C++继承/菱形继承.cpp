//#include <iostream>
//using namespace std;
//class Animal
//{
//public:
//	int m_Age;
//};
//
////�̳�ǰvirtual �ؼ����ˣ���Ϊ��̳�
////��ʱ�����ĸ���Animal��Ϊ�����
//class Sheep : virtual public Animal {};
//class Tuo : virtual public Animal {};
////class Sheep :  public Animal {};
////class Tuo :  public Animal {};
//class SheepTuo : public Sheep, public Tuo{};
//void test()
//{
//	SheepTuo st;
//	//ʹ�ö�����з��� ������+������+��Ա���Է���
//	st.Sheep::m_Age = 100;	
//	st.Tuo::m_Age = 200;
//
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age =  " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
////���μ̳д�������Ҫ����������̳�������ͬ�����ݣ� ������Դ�˷��Լ���������
////������̳п��Խ�����μ̳е�����
//
