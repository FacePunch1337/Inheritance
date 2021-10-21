#pragma once
#include "Header.h"
#include "Book.h"
class Booklet : public Book
{
private:
	int publish_date;
	string publish_month;
public:
	Booklet():publish_date(NULL), publish_month("Month") {cout <<"Constructor"<< '\t' << this << endl; };
	Booklet* Set_Publish_Date(int publish_date);
	int Get_Publish_Date();
	Booklet* Set_Publish_Month(string publish_month);
	string Get_Publish_Month();
	string ToString() override{
		return Book::ToString() + ", " + Get_Publish_Month()+ " " + std::to_string(publish_date);
	};
	~Booklet(){ cout << "Destructor" << '\t' << this << endl; };
	
};

