#include "Header.h"
#include "Literature.h"
#include "Book.h"
#include "Journal.h"
#include "Newspaper.h"
#include "Magazine.h"
#include "Booklet.h"


int main()
{
	cout <<"|Library|" << '\n' << endl;
	Book *book = new Book;
	book->SetAuthor("Knuth")->SetTitle("Art of Programming");

	Newspaper *newspaper = new Newspaper;
	newspaper->SetNumber(3212)->SetTitle("Newspaper");

	Journal *journal = new Journal;
	journal->SetPublishing("RocketBook")->SetTitle("Journal");
	
	cout << book->ToString() << endl;
	cout << newspaper->ToString() << endl;
	cout << journal->ToString() << endl;
	cout << "------------------" << endl;
	
	Magazine* mag = new Magazine;
	mag->SetYear(2020)->SetPublishing("LSPD")->SetTitle("Hight standarts");

	cout << mag->ToString()<< endl;

	Booklet* booklet = new Booklet;
	booklet->Set_Publish_Month("January")->Set_Publish_Date(1995)->SetTitle("Booklet");

	cout << booklet->ToString() << endl;

	Literature** funds = new Literature*[4];
	funds[0] = book;
	funds[1] = newspaper;
	funds[2] = journal;
	funds[3] = booklet;


	for (size_t i = 0; i < 4; i++)
	{
		cout << funds[i]->ToString() << '\n' << endl;
	}

	delete book;
	delete newspaper;
	delete journal;
	delete mag;
	delete booklet;
	
	system("pause");
	return 0;
}