/** Test Question 2.cpp
 *	
 *	In this program we define a function that returns nothing and has 
 *	no parameters. 
 *	   
 *	@author		Luv Modi
 *	@version	2021.02

*/
#include <cstdlib>
#include <iostream>
double inputValue;
using namespace std;

double findAbs(double inputValue);

int main()
{
    double inputValue, resultValue;
    cout << "Enter Number to find the absolute value: " <<endl;
    cin >> inputValue;

    resultValue = findAbs(inputValue);
    cout << resultValue <<" is the absolute value of " <<inputValue;



}

double findAbs(double inputValue){
    return abs(inputValue);

}

 