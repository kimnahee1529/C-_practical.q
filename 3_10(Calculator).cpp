//Calculator.h
class Add {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
class Sub {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
class Mul {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
class Div {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};


//Calculator.cpp
#include <iostream>
using namespace std;

#include "Calculator.h"

void Add::setValue(int x, int y) {
	a = x; b = y;
}
int Add::calculate() {
	return a + b;
}
void Sub::setValue(int x, int y) {
	a = x; b = y;
}
int Sub::calculate() {
	return a - b;
}
void Mul::setValue(int x, int y) {
	a = x; b = y;
}
int Mul::calculate() {
	return a * b;
}
void Div::setValue(int x, int y) {
	a = x; b = y;
}
int Div::calculate() {
	return a / b;
}


//main.cpp
#include <iostream>
#include <string>
using namespace std;

#include "Calculator.h"

int main() {
	char cal[10];
	int x, y;

	while (1) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> cal;
		if (!strcmp(cal,"+")) {
			Add a;
			a.setValue(x, y);
			cout << x<<y<<a.calculate() << endl;
		}
		else if (!strcmp(cal, "-")) {
			Sub s;
			s.setValue(x, y);
			cout << x << y << s.calculate() << endl;
		}
		else if (!strcmp(cal, "*")) {
			Mul m;
			m.setValue(x, y);
			cout<< x << y << m.calculate() << endl;
		}
		else if (!strcmp(cal, "/")) {
			Div d;
			d.setValue(x, y);
			cout<< x << y << d.calculate() << endl;
		}
	}
}
