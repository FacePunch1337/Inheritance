#include "Header.h"
#include "Newspaper.h"

Newspaper* Newspaper::SetNumber(int number)
{
    this->number = number;
    return this;
}

int Newspaper::GetNumber()
{
    return number;
}

string Newspaper::ToString()
{
    string res = "";
    res += GetTitle() + " (" + std::to_string(number) + ")";
    return res;
}
