#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() {};
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};
class Family {
	Person* p;
	int size;
	string Fname;
public:
	Family(string name, int size);
	void show();
	void setName(int num, string name);
	~Family() {};
};
Family::Family(string name, int size) {
	p=new Person[size];
	Fname = name;
	this->size = size;
}
void Family::show() {
	cout << Fname << "가족은 다음과 같이 " << size << "명입니다." << endl;
	for (int i = 0; i < 3; i++) {
		cout << p[i].getName() << "\t";
	}
}
void Family::setName(int num, string name) {
	p[num].setName(name);
}
int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart. Simpson");
	simpson->show();
	delete simpson;
}
