#pragma once
#include "Header.h"
#include "Literature.h"
class Factory
{
private: 
	size_t parts;
	string* splitString(string str, char sym);
public:
	Literature* fromString(string std);
};

