#include <iostream>
#include <string>
using namespace std;

class Integer {
	int i;
public:	
	Integer(int r);
	Integer(string s);
	void set(int a);
	int get();
	bool isEven();
};
inline Integer::Integer(int r) {
	i = r;
}
inline Integer::Integer(string s) {
	int i = stoi(s);
	set(i);
}
inline void Integer::set(int a) {
	i = a;
}
inline int Integer::get() {
	return i;
}
inline bool Integer::isEven() {
	if (i % 2 == 0)
		return true;
	else
		return false;
}
int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}
