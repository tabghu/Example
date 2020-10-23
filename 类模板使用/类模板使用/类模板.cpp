#include <iostream>
#include <string>
using namespace std;
template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age )
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	NameType mName;
	AgeType mAge;
};

int main()
{
	Person<string, int>p1("ËïÎò¿Õ", 999);
	p1.showPerson();
	return 0;
}