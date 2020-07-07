#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "문자열 입력>>";
	string s;
	getline(cin, s, '\n');
	int index = s.find('a');
	int num = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == 'a')
			num++;
	}
	cout << num;
}

/*int main() {
	cout << "문자열 입력>>";
	string s;
	getline(cin, s, '\n');
	int index = 0;
	int num = 0;
	for (int i= 0; index =='\n'; i++) {
		if (s.find('a', index)==0)
			num++;
	}
	cout << num;
}*/
