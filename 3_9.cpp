#include <iostream>
using namespace std;

class Oval {
	int width, height;
public:	
	Oval();
	Oval(int a, int b);
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};
Oval::Oval() :Oval(1, 1) {}
Oval::Oval(int a, int b) {
	width = a; height = b;
}
Oval::~Oval() {
	cout << "Oval 소멸 : ";
	show();
}
int Oval::getWidth() {
	return width;
}
int Oval::getHeight() {
	return height;
}
void Oval::set(int w, int h) {
	width = w; height = h;
}
void Oval::show() {
	cout << "width: " << width << "\t height: " << height<<endl;
}
int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}
