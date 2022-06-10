/**
 * @see  Bronson, G. (2012).  Chapter 7 Modularity Using Functions.
 *		 In A First Book of C++ (4th ed.).
 *		 Boston, MA: Course Technology.
*/
#include<iostream>
using namespace std;

const int MAX=5;
int findMax(int[MAX]); //function prototype
int main()
{
  int nums[MAX]={2,18,101,27,16};
  cout<<"The maximum value is "<<findMax(nums)<<endl;
  return 0;
}
//find the maximum value
int findMax(int vals[MAX])
{
  int i, max=vals[0];
  for(i = 1; i<MAX;i++)
     if(max< vals[i])
      max=vals[i];
  return max;
}
