//#include <iostream>
//using namespace std;
//
////��̬���ŵ�
////1. ������֯�ṹ���
////2. �ɶ���ǿ
////3. ����ǰ��ά��
//
////��̬ʵ��
////�����������
////��̬�ŵ㣺 ������֯�ṹ�������ɶ���ǿ������ǰ�ںͺ��ڵ���չ�Լ�ά��
//
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
////�ӷ�������
//class AddCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////����������
//class SubCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////�˷�������
//class MulCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test()
//{
//	//�����ӷ�������
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;		//�����˼ǵ�����
//	abc = NULL;
//	//��������������
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//�����˷�������
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
////�ܽ᣺ C++�����ᳫ���ö�̬��Ƴ���ܹ�����Ϊ��̬�ŵ�ܶ�