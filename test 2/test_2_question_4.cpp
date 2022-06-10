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
#include <cmath>

double inputValue;
using namespace std;

double findAbs(double inputValue);
float mult(float mult1, float mult2 );
float square(float squared);

int main()
{
    double inputValue, resultValue;
    float mult1, mult2, multiple;
    float squared, sqinput;

    //ABS VAL FUNCTION
    cout << "Enter Number to find the absolute value: " <<endl;
    cin >> inputValue;

    resultValue = findAbs(inputValue);
    cout << resultValue <<" is the absolute value of " <<inputValue<<endl;

    //MULTIPLIER NUMBER
    cout << "Enter two values to multiply: " <<endl;
    cin >> mult1;
    cin >> mult2;
    multiple = mult(mult1, mult2);
    cout << mult1 << "x"<< mult2 << " = " << multiple << endl;


    //SQUARE FUNCTION
    cout << "Enter number to square" << endl;
    cin >> sqinput;
    squared = square(sqinput);
    cout << sqinput << " squared = " << squared << endl;

}

double findAbs(double inputValue)
{
    return abs(inputValue);

}

float mult(float mult1, float mult2 )
{
    return abs(mult1 * mult2);

}

float square(float sqinput)
{
   return pow(sqinput, sqinput);

}