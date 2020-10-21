//#include <iostream>
//#include <string>
//using namespace std;
//
//
////全局函数做友元
//class Building {
//	//告诉编译器 goodgay全局函数 是 Building类的好朋友， 可以访问类中的私有内容
//	friend void goodGay(Building* building);
//public:
//	Building() {
//		this->m_SittingRoom = "客厅";
//		this->m_BedRoom = "卧室";
//
//	}
//public:
//	string m_SittingRoom;	//客厅
//private:
//	string m_BedRoom;		//卧室
//};
//
//void goodGay(Building* building) {
//	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
//	cout << "好基友正在访问： " << building->m_BedRoom << endl;
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
//	//告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有成员
//	friend class goodGay;
//public:
//	Building();
//public:
//	string m_SittingRoom;	//客厅
//private:
//	string m_BedRoom;	//卧室
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
//	this->m_SittingRoom = "客厅";
//	this->m_BedRoom = "卧室";
//}
//
//goodGay::goodGay() {
//	building = new Building;
//}
//void goodGay::visit() {
//	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
//	cout << "好基友正在访问： " << building->m_BedRoom << endl;
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
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//goodGay::goodGay() {
//	building = new Building;
//}
//void goodGay::visit() {
//	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
//	cout << "好基友正在访问： " << building->m_BedRoom << endl;
//}
//void test00() {
//	goodGay gg;
//	gg.visit();
//}
//int main() {
//	test00();
//	return 0;
//}