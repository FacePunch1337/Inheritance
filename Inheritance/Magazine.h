#pragma once
#include "Header.h";
#include "Journal.h"
#include "Childish.h"
class Magazine : public Journal, public Childish
{
private:
	int year;
public:
	Magazine() :year(9999) { cout << "Constructor Magazine" << '\t' << this << endl; };
	Magazine* SetYear(int year);
	int GetYear();
	string ToString() override {
		return Journal::ToString()  +", "+std::to_string(year);
	}
	~Magazine() { cout << "Destructor" << '\t' << this << endl; };
};

