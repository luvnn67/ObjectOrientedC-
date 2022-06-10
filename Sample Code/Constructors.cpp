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
  };
//class implementation section
Date::Date(int mm,int dd,int yyyy)
{
month =mm;
day=dd;
year=yyyy;
cout<<:"Created a new date object with data values"
    <<month<<","<<day<<","<<year<<endl;

int main()
{
Date a;   //declare an object
Date b;  //declare an object
Date c(4,1,2009); //declare an object
return 0;
}
