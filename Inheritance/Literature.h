#pragma once
#include "Header.h"
class Literature
{
private:
	string title;
public:
	Literature() :title("DefLiterature") { cout << "Constructor Literature" << '\t' << this << endl; };
	Literature* SetTitle(string title);
	string GetTitle();
	virtual string ToString() = 0;
	~Literature() { cout << "Destructor" << '\t' << this << endl; };
};
