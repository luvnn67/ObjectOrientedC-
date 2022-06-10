/**
 * @see  Bronson, G. (2012).  Chapter 6 Modularity Using Functions.
 *		 In A First Book of C++ (4th ed.).
 *		 Boston, MA: Course Technology.
*/


#include <iostream>
#include <iomanip>
using namespace std;


//class declaration section
class Date
{
private:
int month;
int day;
int year;
public:
Date(int=7,int=4,int =2012);//constructor
void setDate(int,int,int);//member method to copy a date
void showDate();//member method to display a date
};
//class implementation section
Date::Date(int mm,int dd,int yyyy)
{
month =mm;
day=dd;
year=yyyy;
}


void Date::setDate(int mm,int dd,int yyyy)
{
month=mm;
day=dd;
year=yyyy;
return;
}
void Date::showDate()
{
cout<<"The date is";
cout<<setfill('0')
<<setw(2)<<month<<'/'
<<setw(2)<<day<<'/'
<<setw(2)<<year%100;//extract the last 2 year digits
cout<<endl;
return;
}
int main()
{
Date a,b,c(4,1,2000);//declare 3 objects
b.setDate(12,25,2009);//assign values to b's data members
a.showDate();//display object a's values
b.showDate();//display objectƒb's values
c.showDate();//display objectc's values
return 0;
}
