#include "Header.h"
#include "Literature.h"
#include "Book.h"
#include "Journal.h"
#include "Newspaper.h"

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
	

	Literature** funds = new Literature*[3];
	funds[0] = book;
	funds[1] = newspaper;
	funds[2] = journal;
	


	for (size_t i = 0; i < 3; i++)
	{
		cout << funds[i]->ToString() << '\n' << endl;
	}

	delete book;
	delete newspaper;
	delete journal;
	system("pause");
	return 0;
}