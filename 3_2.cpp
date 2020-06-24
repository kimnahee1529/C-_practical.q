#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
public:
	Date(int y, int m, int d);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};
Date::Date(int y, int m, int d) {
	year = y, month = m, day = d;
}
Date::Date(string s) {
	year = stoi(s.substr(0, 4));//"1945/8/15" string을 int로 바꾸는 거래
	month = stoi(s.substr(5, 1));
	day = stoi(s.substr(7, 2));
}
int::Date::getYear() {
	return year;
}
int::Date::getMonth() {
	return month;
}
int::Date::getDay() {
	return day;
}
void::Date::show() {
	cout << year << "년" << month << "월" << day << "일\n";
}
int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
