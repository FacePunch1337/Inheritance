#pragma once
#include "Header.h"
#include "Literature.h"
class Book : public Literature	
{
private:
	string author;
public:
	Book* SetAuthor(string author);
	string GetAuthor();
	virtual string ToString();
};

