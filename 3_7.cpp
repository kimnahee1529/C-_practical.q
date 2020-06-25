#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
	string s;
public:
	Random(string s);
	int next();
	int nextInRage(int a, int b);
	string getstr();
};
string Random::getstr() {
	return s;
}
Random::Random(string st) {
	srand((unsigned)time(0));
	s = st;
}
int Random::next() {
	int n = rand();
	if (getstr() == "짝수") {
		if (n % 2 == 0)
			return n;
		else
			return n + 1;
	}
	else {
		if (n % 2 == 0)
			return n + 1;
		else
			return n;
	}
}
int Random::nextInRage(int a, int b) {
	int n= a + (rand() % (b - a + 1));
	if (getstr() == "짝수") {
		if (n % 2 == 0)
			return n;
		else
			return n + 1;
	}
	else {
		if (n % 2 == 0)
			return n + 1;
		else
			return n;
	}
}
int main() {
	Random r("짝수");
	Random rr("홀수");
	cout << "--0에서 " << RAND_MAX << "까지의 "<<r.getstr()<<"랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << rr.getstr() << "10까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = rr.nextInRage(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
