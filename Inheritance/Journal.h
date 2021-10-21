#pragma once
#include "Header.h"
#include "Literature.h"
#include <string>
class Journal : public Literature
{
private:
    string publishing;
public:
    Journal* SetPublishing(string publishing);
    string GetPublishing();
    virtual string ToString();
    ~Journal() { cout << "Destructor" << '\t' << this << endl; };
};

