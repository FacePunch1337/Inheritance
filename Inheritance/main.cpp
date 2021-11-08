#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "Literature.h"
#include "Book.h"
#include "Journal.h"
#include "Newspaper.h"
#include "Magazine.h"
#include "Booklet.h"
#include "Childish.h"
#include "Factory.h"



int main()
{
	cout <<"|Library|" << '\n' << endl;


	Book *book = new Book;
	book->SetAuthor("Knuth")->SetTitle("Art of Programming");
	cout << book->ToString() << endl;


	Newspaper *newspaper = new Newspaper;
	newspaper->SetNumber(3212)->SetTitle("Newspaper");
	cout << newspaper->ToString() << endl;


	Journal *journal = new Journal;
	journal->SetPublishing("RocketBook")->SetTitle("Journal");
	cout << journal->ToString() << endl;
	
	
	Magazine* magazine = new Magazine;
	magazine->SetYear(1990)->SetPublishing("LSPD")->SetTitle("Hight standarts");
	cout << magazine->ToString()<< endl;

	Magazine* second_magazine = new Magazine;
	magazine->SetYear(2020)->SetPublishing("HHM")->SetTitle("Hello World");
	cout << second_magazine->ToString() << endl;


	Booklet* booklet = new Booklet;
	booklet->Set_Publish_Month("January")->Set_Publish_Date(1995)->SetTitle("Booklet");
	cout << booklet->ToString() << endl;


	cout << "------------------" << endl;
	Childish* childish = new Childish;

	Literature** funds = new Literature*[6];
	funds[0] = book;
	funds[1] = newspaper;
	funds[2] = second_magazine;
	funds[3] = (Literature*)journal;
	funds[4] = booklet;
	funds[5] = magazine;


	for (size_t i = 0; i < 6; i++)
	{
		cout << funds[i]->ToString() << '\n' << endl;
	}

	cout <<"-------------------------"<<endl;
	cout << endl;

	for (size_t i = 0; i < 6; i++)
	{
		Journal* ptr = dynamic_cast<Journal*>(funds[i]);
		if (ptr != NULL) {
			cout<< ptr->GetPublishing()<<endl;
		}
	}
	cout << "-----------Childish-------------" << endl;
	cout << endl;

	for (size_t i = 0; i < 6; i++)
	{
		Childish* ptr = dynamic_cast<Childish*>(funds[i]);
		if (ptr != NULL) {
			cout << funds[i]->ToString() << endl;
		}
	}

	cout << "***-------------------------" << endl;
	cout << endl;

	Factory factory;
	factory.fromFactory(".lit");
	factory.fromDirectory("./Literature", "./lit");
	factory.fromFactory(".h");
	factory.Print();
	cout << "-------------------------" << endl;
	cout << endl;
	
	delete book;
	delete newspaper;
	delete journal;
	delete booklet;
	delete magazine;
	system("pause");
	return 0;
}