/** 01_Array_Basics.cpp
 *	
 *	Arrays Example Program 01 for OOP 2200. In this example, we will 
 *	declare, input data into, and output data from, a basic array.
 *	   
 *	@author		Thom MacDonald
 *	@version	2018.01 (Updated console input functions)
 *	@since		17 Feb 2018
 *	@see 		Bronson, G. (2012).  Chapter 7 Arrays. 
 *					In A First Book of C++ (4th ed.). 
 *					Boston, MA: Course Technology.
 *	@see		https://youtu.be/0DgFVsHwF30
*/

#include <iostream>
#include <iomanip> // for output formatting
#include "MyConsoleInput.h" // from Functions, Lesson 3
using namespace std;	


int main()
{
	// DECLARATIONS
	
	const int NUMBER_OF_TESTS = 4;  // 'Companion' to the array
									// 	 Unlike C# and other languages that  
									// 	 treat arrays as objects, C++ arrays 
									//	 have no methods or properties. Therefore
									//	 you need to keep track of the size of 
									//	 the array.
									
	// type  arrayName[SIZE]; // where SIZE is a named or literal constant
	double studentTestGrades[NUMBER_OF_TESTS]; 	// creates 4 double variables
												// located in sequence in memory
	
	// Output an information header
	cout << "Arrays Example 01" << endl
		 << "===================" << endl;
	
	// INPUT
	// prompt for test 1
	cout << "Please enter the grade for test 1: ";
	// get test 1
	cin >> studentTestGrades[0];  // '0' is the first position of the array
	
//	// Better to use our validation functions
//	// prompt for test 1
//	cout << "Please enter the grade for test 2: ";
//	// get test 1
//	studentTestGrades[1] = ConsoleInput::ReadDouble(0.0, 100.0);
	
	// Better still to use a loop to input into the array
//	for(int testIndex = 0; testIndex < NUMBER_OF_TESTS; testIndex++)
//	{
//		// prompt for test #
//		cout << "Please enter the grade for test " << (testIndex + 1) << ": ";
//		// get test #
//		studentTestGrades[testIndex] = ConsoleInput::ReadDouble(0.0, 100.0);	
//	}
	
	// OUTPUT
	
	// Display output header, set up formatting
	cout << "\nHere are the student's test grades: " << endl
		 << fixed << setprecision(1);
		 
	// Use a loop again...
	// For each test grade in the array:
	for(int testIndex = 0; testIndex < NUMBER_OF_TESTS; testIndex++)
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
