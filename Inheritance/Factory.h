#pragma once
#include "Header.h"
#include "Literature.h"
#include <fstream>
#include <vector>
#include <filesystem>
class Factory
{
private: 
	size_t parts;
	vector<filesystem::path> files;
	string* splitString(string, char);
public:
	void fromFactory(const string);
	Literature* fromString(string);
	Literature* fromFile(string);
	void fromDirectory(const string, const string);
	void Print();
		
	

};


