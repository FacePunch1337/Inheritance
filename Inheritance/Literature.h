#pragma once
#include "Header.h"
class Literature
{
private:
	string title;
public:
	Literature* SetTitle(string title);
	string GetTitle();
	virtual string ToString() = 0;
	~Literature() { cout << "Destructor" << '\t' << this << endl; };
};
