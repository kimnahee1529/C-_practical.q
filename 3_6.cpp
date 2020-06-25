#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRage(int a, int b);
};
Random::Random() {
	srand((unsigned)time(0));
}
int Random::next() {
	int n = rand();
	if (n % 2 == 0)
		return n;
	else
		return n + 1;
}
int Random::nextInRage(int a, int b) {
	int n= a + (rand() % (b - a + 1));
	if (n % 2 == 0)
		return n;
	else
		return n + 1;
}
int main() {
	Random r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRage(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
