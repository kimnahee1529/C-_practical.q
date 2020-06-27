//Ram.h
#pragma once
#include <iostream>
using namespace std;

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};



//Ram.cpp
#include <iostream>
using namespace std;
#include "Ram.h"

Ram::Ram() {
	mem[100*1024] = { 0 };
	size = 100 * 1024;
}
Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}


//main.cpp
#include <iostream>
using namespace std;
#include "Ram.h"

int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 번지의 값=" << (int)ram.read(102) << endl;
}
