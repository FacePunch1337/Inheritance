#include "Header.h"
#include "Journal.h"


Journal* Journal::SetPublishing(string publishing)
{
    this->publishing = publishing;
    return this;
}

string Journal::GetPublishing()
{
    return publishing;
}

string Journal::ToString()
{
    string res;
    res += publishing + " " + GetTitle();
    return res;
}


