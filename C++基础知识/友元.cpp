//#include <iostream>
//#include <string>
//using namespace std;
//
//
////ȫ�ֺ�������Ԫ
//class Building {
//	//���߱����� goodgayȫ�ֺ��� �� Building��ĺ����ѣ� ���Է������е�˽������
//	friend void goodGay(Building* building);
//public:
//	Building() {
//		this->m_SittingRoom = "����";
//		this->m_BedRoom = "����";
//
//	}
//public:
//	string m_SittingRoom;	//����
//private:
//	string m_BedRoom;		//����
//};
//
//void goodGay(Building* building) {
//	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
//	cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;
//
//}
//void test00() {
//	Building b;
//	goodGay(&b);
//}
//int main() {
//	test00();
//	return 0;
//}
//class Building {
//	//���߱����� goodGay����Building��ĺ����ѣ����Է��ʵ�Building����˽�г�Ա
//	friend class goodGay;
//public:
//	Building();
//public:
//	string m_SittingRoom;	//����
//private:
//	string m_BedRoom;	//����
//};
//
//class goodGay {
//public:
//	goodGay();
//	void visit();
//private:
//	Building* building;
//};
//
//Building::Building()
//{
//	this->m_SittingRoom = "����";
//	this->m_BedRoom = "����";
//}
//
//goodGay::goodGay() {
//	building = new Building;
//}
//void goodGay::visit() {
//	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
//	cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;
//}
//void test00() {
//	goodGay guy;
//	guy.visit();
//}
//int main() {
//	test00();
//	return 0;
//}
//class Building;
//class goodGay {
//public:
//	goodGay();
//	void visit();
//private:
//	Building* building;
//};
//class Building {
//	friend void goodGay::visit();
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
//Building::Building() {
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//goodGay::goodGay() {
//	building = new Building;
//}
//void goodGay::visit() {
//	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
//	cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;
//}
//void test00() {
//	goodGay gg;
//	gg.visit();
//}
//int main() {
//	test00();
//	return 0;
//}