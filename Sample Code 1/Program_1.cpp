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
int i, grade[NUM];
for(i=0;i<NUM;i++)    //Enter the grades
{
    cout<<"Enter a grade:";
    cin>>grade[i];
 }
  cout<<endl;
  for(i=0;i<NUM;i++)    //Print the grades
    cout<<"grade["<<i<<"] is  "<<grade[i]<<endl;

    cout<<endl<<grade[11];
  return 0;
}
