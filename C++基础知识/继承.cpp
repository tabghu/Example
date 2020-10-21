//#include <iostream>
//using namespace std;
//
////例如我们看到很多网站中，都拥有公共的头部，公共的底部，甚至公共的左侧列表，只有中心内容不同
////接下来我们分别利用普通写法和继承的写法来实现网页中的内容，看一下继承存在的意义以及好处
//
//
////公共页面
//class BasePage {
//public:
//	void header() {
//		cout << "首页、公共课、登录、注册...（公共头部）" << endl;
//	}
//	void footer() {
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left() {
//		cout << "Java, pyhton,C++...(公共分类列表)" << endl;
//	}
//};
//
////Java页面
//class Java : public  BasePage {
//public:
//	void content() {
//		cout << "JAVA学科视频" << endl;
//	}
//};
//
////Python页面
//class Python : public  BasePage {
//public:
//	void content() {
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//
//class Cpp : public  BasePage {
//public:
//	void content() {
//		cout << "C++学科视频" << endl;
//	}
//};
//
//void test() {
//	//Java页面
//	cout << "Java下载视频页面如下：" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "----------------------------------" << endl;
//	//Python页面
//	cout << "Python下载视频页面如下：" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "----------------------------------" << endl;
//	//C++页面
//	cout << "C++下载视频页面如下：" << endl;
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
////继承的好处： ==可以减少重复的代码==
////class A : public B;
////A类称为子类或派生类
////B类称为父类 或 基类