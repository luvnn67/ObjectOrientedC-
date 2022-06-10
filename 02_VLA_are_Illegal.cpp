/** 02_VLA_are_Illegal.cpp
 *	
 *	Arrays Example Program 02 for OOP 2200. In this example, we will 
 *	declare an array using a variable size rather than a constant. 
 *
 *	THIS IS AN ERROR! Even though it 'works' using GCC compiler
 *  To get warnings of non-conforming code, specify -pedantic	
 *   
 *	@author		Thom MacDonald
 *	@version	2018.01 (Updated console input functions)
 *	@since		17 Feb 2018
 *	@see 		Bronson, G. (2012).  Chapter 7 Arrays. 
 *					In A First Book of C++ (4th ed.). 
 *					Boston, MA: Course Technology.
 *	@see		https://youtu.be/Rp3ke0X-M40
*/

#include <iostream>
#include <iomanip> // for output formatting
#include "MyConsoleInput.h" // from Functions, Lesson 3
using namespace std;	


int main()
{
	// DECLARATIONS
	
	//const int NUMBER_OF_TESTS = 4;  // 'Companion' to the array
	int numberOfTests;
	
	// Output an information header
	cout << "Arrays Example 02" << endl
		 << "===================" << endl;
	
	// INPUT
	// prompt for the number of tests
	cout << "How many tests are there? ";
	// get the number of tests
	numberOfTests = ConsoleInput::ReadInteger(1);
	
	// Declare the array based on a variable
	double studentTestGrades[numberOfTests]; 	// creates ?? double variables
	
	
	for(int testIndex = 0; testIndex < numberOfTests; testIndex++)
	{
		// prompt for test #
		cout << "Please enter the grade for test " << (testIndex + 1) << ": ";
		// get test #
		studentTestGrades[testIndex] = ConsoleInput::ReadDouble(0.0, 100.0);	
	}
	
	// OUTPUT
	cout << "\nHere are the student's test grades: " << endl
		 << fixed << setprecision(1);
	// For each test grade in the array:
	for(int testIndex = 0; testIndex < numberOfTests; testIndex++)
	{
		// display the test number followed by the 
		// test grade in a field width of 5 characters
		
		cout << "Test #" << (testIndex + 1) << " - "
			 << setw(5) << studentTestGrades[testIndex] << endl;
	}
	
	// done.
	cout << endl << endl;
	return 0;
} // end of main
