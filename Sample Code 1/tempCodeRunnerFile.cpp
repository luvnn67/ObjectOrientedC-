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
 
  cout<<endl;
  for(i=0;i<NUM;i++)    //Print the grades
    cout<<"grade["<<i<<"] is  "<<grade[i]<<endl;

    cout<<endl<<grade[11];
  return 0;
}
