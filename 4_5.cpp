#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string str;
	cout << "Please enter one line below. (enter exit if exit) " << endl;

	while (1) {
		cout << ">>";
		getline(cin, str, '\n');
		if (str == "exit") {
			return 0;
		}
		srand((unsigned)time(0));
		int n = rand() % str.size();//str's first index
		int x = (rand() % 25) + 97;
		str[n] = x;
		cout << str << endl;
	}
}
