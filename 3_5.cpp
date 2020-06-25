#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// <cstdlib>헤더파일에 선언되어 있는 정수 32767인 RAND_MAX
//랜덤정수 생성하기 위해 필요한 srand((unsigned)time(0)); int n=rand();함수가 있는 <
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
	return n;
}
int Random::nextInRage(int a, int b) {
	int n= a + (rand() % (b - a + 1));
	return n;
}
int main() {
	Random r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRage(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}
