/** 03_Array_Initialization.cpp
 *	
 *	Arrays Example Program 03 for OOP 2200. In this example, we will 
 *	examine initializing an array.
 *	   
 *	@author		Thom MacDonald
 *	@version	2018.01 
 *	@since		17 Feb 2018
 *	@see 		Bronson, G. (2012).  Chapter 7 Arrays. 
 *					In A First Book of C++ (4th ed.). 
 *					Boston, MA: Course Technology.
 *	@see		https://youtu.be/WglHujH1QYE
*/

#include <iostream>
using namespace std;	


int main()
{
	// DECLARATIONS
	
	const int NUMBER_OF_TESTS = 4;  // 'Companion' to the array
	
	// Un-initialized
	double studentTestGrades[NUMBER_OF_TESTS]; 
	
	// Fully initialized
	// double studentTestGrades[NUMBER_OF_TESTS] = { 44.4, 55.5, 77.7, 88.8 }; 
	
	// Partially initialized 
	// double studentTestGrades[NUMBER_OF_TESTS] = { 44.4, 55.5 }; 
	
	// Lazy initialization ;)	
	//double studentTestGrades[] = { 44.4, 55.5, 77.7, 88.8 }; 	
	
		
	// OUTPUT
	cout << "Arrays Example 03" << endl
		 << "===================" << endl
		 << "\nHere is the contents of the array, as initialized: " << endl;
		 
	// For each test grade in the array:
	for(int testIndex = 0; testIndex < NUMBER_OF_TESTS; testIndex++)
	{
		// display the subscript followed by the test grade
		
		cout << "[" << (testIndex) << "] - "
			 << studentTestGrades[testIndex] << endl;
	}
	
	// done.
	cout << endl << endl;
	return 0;
} // end of main
