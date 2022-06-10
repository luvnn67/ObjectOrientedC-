/**
 * @see  Bronson, G. (2012).  Chapter 7 Modularity Using Functions.
 *		 In A First Book of C++ (4th ed.).
 *		 Boston, MA: Course Technology.
*/

#include<iostream>
using namespace std;

int selectionSort(int[],int);
int main()
{
  const int NUMEL =10;
  int nums[NUMEL]={22,5,67,98,45,32,101,99,73,10};
  int i,moves;
  moves=selectionSort(nums,NUMEL);
  cout<<"The sorted list, in ascending order,is:\n ";
  for(i=0;i<NUMEL;i++)
    cout<<" "<<nums[i];
  cout<<'\n'<<moves<<" moves were made to sort this list\n ";
  return 0;
}
int selectionSort(int num[],int numel)
{
  int i, j, min, minidx, temp, moves = 0;
  for(i=0;i<(numel-1);i++)

  {
    min=num[i];  // assume minimum is the first array element
    minidx=i;   //index of minimum element
    for(j=i+1;j<numel;j++)
    {
      if(num[j]<min) //if you've located a lower value
      {              //capture it
        min=num[j];
        minidx=j;
      }
    }
    if(min<num[i])     //check whether you have a new minimum
    {                  //and if you do, swap values
      temp=num[i];
      num[i]=min;
      num[minidx]=temp;
      moves++;
    }
  }
  return moves;
}
