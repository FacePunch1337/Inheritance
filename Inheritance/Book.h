#pragma once
#include "Header.h"
#include "Literature.h"
class Book : public Literature	
{
private:
	string author;
public:
	Book() :author("author") { cout << "Constructor Book" << '\t' << this << endl; };
	Book* SetAuthor(string author);
	string GetAuthor();
	virtual string ToString();
};

