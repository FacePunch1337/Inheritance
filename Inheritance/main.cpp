#include "Header.h"
#include "Literature.h"
#include "Book.h"
#include "Journal.h"
#include "Newspaper.h"
#include "Magazine.h"
#include "Booklet.h"
#include "Childish.h"


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
	
	Magazine* magazine = new Magazine;
	magazine->SetYear(2020)->SetPublishing("LSPD")->SetTitle("Hight standarts");

	cout << magazine->ToString()<< endl;

	Booklet* booklet = new Booklet;
	booklet->Set_Publish_Month("January")->Set_Publish_Date(1995)->SetTitle("Booklet");

	cout << booklet->ToString() << endl;

	Childish* childish = new Childish;

	Literature** funds = new Literature*[5];
	funds[0] = book;
	funds[1] = newspaper;
	funds[2] = (Literature*)journal;
	funds[3] = booklet;
	funds[4] = magazine;


	for (size_t i = 0; i < 4; i++)
	{
		cout << funds[i]->ToString() << '\n' << endl;
	}

	cout <<"-------------------------"<<endl;
	cout << endl;

	for (size_t i = 0; i < 5; i++)
	{
		Journal* ptr = dynamic_cast<Journal*>(funds[i]);
		if (ptr != NULL) {
			cout<< ptr->GetPublishing()<<endl;
		}
	}
	cout << "-----------Childish-------------" << endl;
	cout << endl;

	for (size_t i = 0; i < 5; i++)
	{
		Childish* ptr = dynamic_cast<Childish*>(funds[i]);
		if (ptr != NULL) {
			cout << funds[i]->ToString() << endl;
		}
	}

	delete book;
	delete newspaper;
	delete journal;
	delete booklet;
	delete magazine;
	system("pause");
	return 0;
}