
#include "Booklet.h"

Booklet* Booklet::Set_Publish_Date(int publish_date)
{
  this->publish_date = publish_date;
    return this;
}

int Booklet::Get_Publish_Date()
{
    return publish_date;
}

Booklet* Booklet::Set_Publish_Month(string publish_month)
{
    this->publish_month = publish_month;
    return this;
}

string Booklet::Get_Publish_Month()
{
    return publish_month;
}

