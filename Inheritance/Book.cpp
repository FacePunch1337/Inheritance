#include "Header.h"
#include "Book.h"

Book* Book::SetAuthor(string author)
{
	this->author = author;
	return this;
}

string Book::GetAuthor()
{
	return author;
}

string Book::ToString()
{
	string res;
	res += author + " " + GetTitle();
	return res;
}
