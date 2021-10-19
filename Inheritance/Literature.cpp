#include "Header.h"
#include "Library.h"
#include "Literature.h"
#include "Book.h"
#include "Journal.h"
#include "Newspaper.h"


Literature* Literature::SetTitle(string title)
{
	this->title = title;
	return this;
}

string Literature::GetTitle()
{
	return title;
}






