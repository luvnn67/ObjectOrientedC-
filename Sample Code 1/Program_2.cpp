/**
 * @see  Bronson, G. (2012).  Chapter 7 Modularity Using Functions.
 *		 In A First Book of C++ (4th ed.).
 *		 Boston, MA: Course Technology.
*/

#include<iostream>
using namespace std;
int main()
{
const int NUM=5;
int i, grade[NUM], total = 0;
for(i=0;i<NUM;i++)    //Enter the grades
{
    cout<<"Enter a grade:";
    cin>>grade[i];
 }
 cout<<"\nThe total of the grades";
  cout<<endl;
  for(i=0;i<NUM;i++)    //Display and total the grades
    {
       total=total+grade[i];

    }
    cout<<"  "<<total<<endl;
  return 0;
}
