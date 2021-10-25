#include "Header.h"
#include "Literature.h"
#include "Factory.h"

string* Factory::splitString(string str, char sym)
{
    parts = 1;
    size_t pos = 0;

    while( (pos = str.find(sym,pos+1)) != string::npos )
        parts++;

    string* res = new string[parts];
    size_t pos2;
    pos = 0;
    for (size_t i = 0; i < parts - 1; i++) {
        pos2 = str.find(sym, pos + 1);
        res[i] = str.substr(pos, (pos2-pos) );
        pos = pos2;
    }
    res[parts-1] = str.substr(pos + 1);


    return res;
}

Literature* Factory::fromString(string str)
{
    auto arr = splitString(str, '\n');
    size_t lines = parts;

    auto pair1 = splitString(arr[0], ':');

    auto pair2 = splitString(arr[1], ':');

    if (pair2[0] == "auhtor") {
        Book* book = new Book;
        return book->SetAuthor(pair2[1])->SetTitle(pair1[1]);
    }

    if (pair2[0] == "publisher") {
        Journal* journal = new Journal;
        return journal->SetPublishing(pair2[1])->SetTitle(pair1[1]);
    }
    return NULL;
}
