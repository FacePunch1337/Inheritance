#pragma once
#include "Header.h";
#include "Journal.h"
class Magazine : public Journal
{
private:
	int year;
public:
	Magazine* SetYear(int year);
	int GetYear();
	string ToString() override {
		return Journal::ToString()  +", "+std::to_string(year);
	}
	~Magazine() { cout << "Destructor" << '\t' << this << endl; };
};

