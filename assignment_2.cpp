/** Assignment 2.cpp
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
double gradepoints(double inputValue);



int main()
{
    double inputValue, resultValue;


    //INPUT VAL FUNCTION
    cout << "Enter grade out 0 to 100. Type 1000 to quit: ";
    cin >> inputValue;
    round(inputValue);
    while (inputValue != 1000)
    {
        if (inputValue > 0 & inputValue <= 100)
        {   resultValue = gradepoints(inputValue);
            cout << resultValue <<" is the gradepoint value of " <<round(inputValue)<<"%"<<endl;
            cout << "Enter grade out 0 to 100. Type 1000 to quit: ";
            cin >> inputValue;
            round(inputValue);
            
        }

        else if (inputValue > 100 || inputValue <0)
        {
            cout << "INVALID ENTRY: Enter a valid grade out 0 to 100. Type 1000 to quit: ";
            cin >> inputValue;

        }
        else if (cin.fail())
        {
            cin.clear();
            cout<< "INVALID ENTRY: Enter numeric grade out 0 to 100. Type 1000 to quit: ";
            cin >> inputValue;

        }
    }
    
    while (inputValue == 1000){
        cout<< "GOOD BYE!" << endl;
        break;
    }

    

    
        
    
    
}

double gradepoints(double inputValue)
{
    round(inputValue);
    if (inputValue >= 90 and inputValue <= 100)
    {
        return 5.0;
    }
    
    else if (inputValue >= 85 and inputValue < 90)
    {
        return 4.5;
    }

    else if (inputValue >= 80 and inputValue < 85)
    {
        return 4.0;
    }

    else if (inputValue >= 75 and inputValue < 80)
    {
        return 3.5;
    }

    else if (inputValue >= 70 and inputValue < 75)
    {
        return 3.0;
    }

    else if (inputValue >= 65 and inputValue < 70)
    {
        return 2.5;
    }
    
    else if (inputValue >= 60 and inputValue < 65)
    {
        return 2.0;
    }
    
    else if (inputValue >= 55 and inputValue < 60)
    {
        return 1.5;
    }

    else if (inputValue >= 50 and inputValue < 55)
    {
        return 1.0;
    }

    else if (inputValue < 50)
    {
        return 0;
    }

    

}

