//#include <iostream>
//using namespace std;
////ǳ������ �򵥵ĸ�ֵ��������
////����� �ڶ�����������ռ䣬���п�������
//
//class Person
//{
//public: 
//	//�޲Σ�Ĭ�ϣ����캯��
//	Person(){
//		cout << "�޲ι��캯��!" << endl;
//	}
//	//�вι��캯��
//	Person(int age, int height) {
//		cout << "�вι��캯����" << endl;
//		
//		m_age = age;
//		m_height = new int(height);
//	}
//	Person(const Person& p) {
//		cout << "�������캯����" << endl;
//		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//	//��������
//	~Person() {
//		cout << "��������" << endl;
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		} 
//	}
//public:
//	int m_age;
//	int* m_height;
//};
//void test01()
//{
//	Person p1(18, 20);
//	Person p2(p1);
//	cout << "p1������" << p1.m_age << "���" << *p1.m_height << endl;
//	cout << "p2������" << p2.m_age << "���" << *p2.m_height << endl;
//}
//int main02()
//{
//	test01();
//	return 0;
//}
////�ܽ᣺����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������