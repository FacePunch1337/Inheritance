#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "Literature.h"
#include "Factory.h"
#include <fstream>
#include <filesystem>
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


void Factory::fromFactory(const string extension)
{
    for (filesystem::directory_entry const& dir : filesystem::directory_iterator("./Literature"))
    {
        if (dir.path().extension().string() == extension)
            files.push_back(dir);
    }
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

Literature* Factory::fromFile(string path)
{

    string fileContent = "";
    char buf[100];
    ifstream file(path);
    file.close();
    if (!file.is_open()) {
        return NULL;
    }
    int n;
    while (!file.eof()) {
        file.read(buf, 100);
        n = file.gcount();
        buf[n] = '\0';
        fileContent += buf;
    }
    file.close();
    return fromString(fileContent);
   
}



void Factory::fromDirectory(const string dirname, const string extension)
{
    for (filesystem::directory_entry const& dir : filesystem::directory_iterator(dirname))
    {
        if (dir.is_regular_file())
        {
            if (dir.path().extension().string() == extension);
            files.push_back(dir);
        }
    }
    
   
}

void Factory::Print()
{
    for (size_t i = 0; i < files.size(); i++)
        cout << files[i].filename().string()
        <<"\t" << files[i].root_name() 
        << "\t" << files[i].extension().string() 
        << "\t\t" << files[i].is_relative() 
        << endl;
}




