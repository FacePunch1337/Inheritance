#include "Header.h"
#include "Magazine.h"
#include "Childish.h"
Magazine* Magazine::SetYear(int year)
{
    this->year = year;
    return this;
}

int Magazine::GetYear()
{
    return year;
}
