#include "Header.h"
#include "Literature.h"



Literature* Literature::SetTitle(string title)
{
	this->title = title;
	return this;
}

string Literature::GetTitle()
{
	return title;
}






