//#include <iostream>
//using namespace std;
//
////�������ǿ����ܶ���վ�У���ӵ�й�����ͷ���������ĵײ�����������������б�ֻ���������ݲ�ͬ
////���������Ƿֱ�������ͨд���ͼ̳е�д����ʵ����ҳ�е����ݣ���һ�¼̳д��ڵ������Լ��ô�
//
//
////����ҳ��
//class BasePage {
//public:
//	void header() {
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer() {
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left() {
//		cout << "Java, pyhton,C++...(���������б�)" << endl;
//	}
//};
//
////Javaҳ��
//class Java : public  BasePage {
//public:
//	void content() {
//		cout << "JAVAѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python : public  BasePage {
//public:
//	void content() {
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//
//class Cpp : public  BasePage {
//public:
//	void content() {
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//
//void test() {
//	//Javaҳ��
//	cout << "Java������Ƶҳ�����£�" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "----------------------------------" << endl;
//	//Pythonҳ��
//	cout << "Python������Ƶҳ�����£�" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "----------------------------------" << endl;
//	//C++ҳ��
//	cout << "C++������Ƶҳ�����£�" << endl;
//	Cpp cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
//}
//
//int main() {
//	test();
//	return 0;
//}
////�̳еĺô��� ==���Լ����ظ��Ĵ���==
////class A : public B;
////A���Ϊ�����������
////B���Ϊ���� �� ����