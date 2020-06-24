#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower();
	Tower(int r);
	int getHeight();
};
Tower::Tower():Tower(1) {}
Tower::Tower(int r) {
	height = r;
}
int::Tower::getHeight() {
	return height;
}
int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}
