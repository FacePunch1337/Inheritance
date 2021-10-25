#pragma once
#include "Header.h"
#include "Literature.h"


class Journal : public Literature
{
private:
    string publishing;
public:
    Journal() :publishing("pub") { cout << "Constructor Journal" << '\t' << this << endl; };
    Journal* SetPublishing(string publishing);
    string GetPublishing();
    virtual string ToString();
    ~Journal() { cout << "Destructor" << '\t' << this << endl; };
};

