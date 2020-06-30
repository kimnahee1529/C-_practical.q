//문자열 덧셈식을 입력받아 
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "덧셈문자열 입력: ";//7+23+5+100+25
	string s;
	getline(cin, s, '\n');
	//int sum = 0; 

	int startIndex=0,fIndex=0,sum = 0;
	while(true){
		fIndex= s.find('+', startIndex);//startIndex(처음은 0)부터 +검색 : fIndex=1
		if (fIndex == -1) {//'+' 발견X ->마지막 숫자일 때
			string part = s.substr(startIndex);//startIndex에서 끝까지 서브스트링으로 만들기
			if (part == "")break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = fIndex - startIndex;
		string part = s.substr(startIndex, count);
		cout << part << endl;
		sum += stoi(part);
		startIndex = fIndex + 1;
	}
	cout << "숫자들의 합은 " << sum<<endl;
}
