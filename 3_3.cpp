#include <iostream>
#include <string>
using namespace std;

class Account {
	string name;
	int id, balance;
public:
	Account(string s, int a, int b);
	void deposit(int c);
	string getOwner();
	int inquiry();
	int withdraw(int d);
};
Account::Account(string s, int a, int b) {
	name = s, id = a, balance = b;
}
void Account::deposit(int c) {
	balance += c;
}
string Account::getOwner() {
	return name;
}
int Account::inquiry() {
	return balance;
}
int Account::withdraw(int d) {
	balance -= d;
	return balance;
}
int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
