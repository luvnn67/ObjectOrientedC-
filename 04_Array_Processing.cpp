/** 04_Array_Processing.cpp
 *	
 *	Arrays Example Program 04 for OOP 2200. In this example, we will 
 *	examine processing an array.
 *	   
 *	@author		Thom MacDonald
 *	@version	2018.01
 *	@since		17 Feb 2018
 *	@see 		Bronson, G. (2012).  Chapter 7 Arrays. 
 *					In A First Book of C++ (4th ed.). 
 *					Boston, MA: Course Technology.
 *	@see		https://youtu.be/nxaYWeiAebI
*/

#include <iostream>
#include <iomanip> // for output formatting
using namespace std;	


int main()
{
	// DECLARATIONS
	
	const int NUMBER_OF_TESTS = 4;  // 'Companion' to the array
	
	// an array of double variables to hold test scores
	double studentTestGrades[NUMBER_OF_TESTS] = {65.5, 65.4, 64.8, 65.0}; // initialized
	
	double lowestScore = 101.0; // to hold the lowest score in the array
	double sumOfScores = 0.0; 	// to hold the sum; for calculating average
	double averageScore;		// to hold the calculated average
	int testCounter;			// loop counter
	
	// PROCESSING
	// loop through each element of the array
	for(testCounter = 0; testCounter < NUMBER_OF_TESTS; testCounter++)
	{
		// if this element is smaller than the lowest score stores so far...
		if(studentTestGrades[testCounter] < lowestScore)
		{
			// store this value as the lowest score
			lowestScore = studentTestGrades[testCounter];
		}
		
		// add this element value to the sum
		sumOfScores += studentTestGrades[testCounter];
	}
	// calculate the average by dividing the sum by the test count
	averageScore = sumOfScores / testCounter;
	
	// OUTPUT
	
	// Display output header, set up formatting
	cout << "Arrays Example 04" << endl
		 << "===================" << endl
		 << "\nHere are the student's test grades: " << endl
		 << fixed << setprecision(1);
	
	// Display each test grade in the array.
	for(testCounter = 0; testCounter < NUMBER_OF_TESTS; testCounter++)
	{
		cout << "Test #" << (testCounter + 1) << " - "
			 << setw(5) << studentTestGrades[testCounter] << endl;
	}
	
	// Final output. Display the lowest and average score.
	cout << "\nThe lowest test score was " << lowestScore << endl
		 << "The average test score was " << averageScore << endl; 
	
	// done.
	cout << endl << endl;
	return 0;
} // end of main
