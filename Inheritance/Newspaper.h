#pragma once
#include "Header.h"
#include "Literature.h"
class Newspaper : public Literature
{
private:
    int number;
public:
    Newspaper() :number(0) { cout << "Constructor Newspaper" << '\t' << this << endl; };
    Newspaper* SetNumber(int number);
    int GetNumber();
    virtual string ToString();
    ~Newspaper() { cout << "Destructor" << '\t' << this << endl; };
};

