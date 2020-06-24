#include <iostream>
#include <string>
using namespace std;

class CM {
	int coffee, water, sugar;
public:
	CM(int a, int b, int c);
	void drinkE();
	void drinkA();
	void drinkS();
	void show();
	void fill();
};
CM::CM(int a, int b, int c) {
	coffee = a, water = b, sugar = 6;
}
void CM::drinkE() {
	coffee -= 1; water -= 1;
}
void CM::drinkA() {
	coffee -= 1; water -= 2;
}
void CM::drinkS() {
	coffee -= 1; water -= 2; sugar -= 1;
}
void CM::show() {
	cout << "커피 머신 상태, 커피:" << coffee << " 물:" << water << "\t설탕:" << sugar << endl;
}
void CM::fill() {
	coffee = 10; water = 10; sugar = 10;
}
int main() {
	CM java(5, 10, 3);
	java.drinkE();
	java.show();
	java.drinkA();
	java.show();
	java.drinkS();
	java.show();
	java.fill();
	java.show();
}
