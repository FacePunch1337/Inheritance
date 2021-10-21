#pragma once
#include "Header.h"
#include "Literature.h"
class Newspaper : public Literature
{
private:
    int number;
public:
    Newspaper* SetNumber(int number);
    int GetNumber();
    virtual string ToString();
    ~Newspaper() { cout << "Destructor" << '\t' << this << endl; };
};

