#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "문자열 입력하세요(입력의 끝은 &문자입니다): "<<endl;
	getline(cin, s, '&');
	cin.ignore();//'&'뒤에 따라오는 <Enter>키를 제거하기 위한 코드!!!

	string f, r;
	cout << endl<<"f:";
	getline(cin, f, '\n');
	cout << "r:";
	getline(cin, r, '\n');
	int startIndex = 0;
	while (true) {
		int fIndex = s.find(f, startIndex);//startIndex부터 문자열 f검색
		if (fIndex == -1) break;
		s.replace(fIndex, f.length(), r);//fIndex부터 문자열 f의 길이만큼 문자열 r로 변경
		startIndex = fIndex + r.length();
	}
	cout << s << endl;
}
