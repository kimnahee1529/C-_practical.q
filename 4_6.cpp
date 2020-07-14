#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Please enter a line below." << endl;
	while (1) {
		cout << ">>";
		string s;
		getline(cin, s, '\n');
		if (s == "exit") break;
		int len = s.length();
		for (int i = len-1; i >= 0; i--) {
			cout << s[i];
		}
		cout << endl;
	}
}
