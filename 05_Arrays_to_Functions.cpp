/** 05_Arrays_to_Functions.cpp
 *	
 *	Arrays Example Program 05 for OOP 2200. In this example, we will 
 *	pass arrays to functions.
 *	   
 *	@author		Thom MacDonald
 *	@version	2018.01
 *	@since		17 Feb 2018
 *	@see 		Bronson, G. (2012).  Chapter 7 Arrays. 
 *					In A First Book of C++ (4th ed.). 
 *					Boston, MA: Course Technology.
 *	@see		https://youtu.be/PfLxWkm2AEM
*/

#include <iostream>
#include <iomanip> // for output formatting
using namespace std;	

/**	AverageOfArray function
 *	@param		arrayValues[] - an array of doubles  
 *	@param		SIZE - the size of the array
 *	@return		the average value of the array
*/
double AverageOfArray(double arrayValues[], const int SIZE);

/**	MinimumValue function
 *	@param		arrayValues[] - an array of doubles
 *	@param		SIZE - the size of the array
 *	@return		the minimum value found in the array
*/
double MinimumValue(double arrayValues[], const int SIZE);

/**	MinimumValueIndex function
 *	@param		arrayValues[] - an array of doubles
 *	@param		SIZE - the size of the array
 *	@return		the index of the minimum value found in the array
*/
int MinimumValueIndex(double arrayValues[], const int SIZE);

int main()
{
	// DECLARATIONS
	
	const int NUMBER_OF_TESTS = 4;  // 'Companion' to the array
	
	// an array of double variables to hold test scores
	double studentTestGrades[NUMBER_OF_TESTS] = {65.5, 65.4, 64.8, 65.0}; // initialized
	
	// OUTPUT
	cout << "Arrays Example 05" << endl
		 << "===================" << endl
		 << "\nHere are the student's test grades: " << endl
		 << fixed << setprecision(1);
	
	// Display each test grade in the array.
	for(int testCounter = 0; testCounter < NUMBER_OF_TESTS; testCounter++)
	{
		cout << "Test #" << (testCounter + 1) << " - "
			 << setw(5) << studentTestGrades[testCounter] << endl;
	}
	
	// Final output. Display the lowest and average score.
	cout << "\nThe average test score was " 
		 << AverageOfArray(studentTestGrades, NUMBER_OF_TESTS) << endl
		 << "The lowest test score (by value) was " 
		 << MinimumValue(studentTestGrades, NUMBER_OF_TESTS) << endl
		 << "The lowest test score (by index) was " 
		 << studentTestGrades[MinimumValueIndex(studentTestGrades, NUMBER_OF_TESTS)] << endl;
	
	// done.
	cout << endl << endl;
	return 0;
} // end of main

//	AverageOfArray function
double AverageOfArray(double arrayValues[], const int SIZE)
{
	double sumOfValues = 0.0;
	for(int counter = 0; counter < SIZE; counter++)
	{
		// add this element value to the sum
		sumOfValues += arrayValues[counter];
	}
	// calculate the average by dividing the sum by the test count
	return (sumOfValues / SIZE);
}
	
//	MinimumValue function
double MinimumValue(double arrayValues[], const int SIZE)
{
	double lowestValue = arrayValues[0];
	for(int counter = 1; counter < SIZE; counter++)
	{
		// if this element is smaller than the lowest value stored so far...
		if(arrayValues[counter] < lowestValue)
		{
			// store this value as the lowest value
			lowestValue = arrayValues[counter];
		}
	}
	return lowestValue;
}			 

//	MinimumValueIndex function
int MinimumValueIndex(double arrayValues[], const int SIZE)
{
	int lowestIndex = 0;
	for(int counter = 1; counter < SIZE; counter++)
	{
		// if this element is smaller than the lowest value found so far...
		if(arrayValues[counter] < arrayValues[lowestIndex])
		{
			// store this index as the index of the lowest value
			lowestIndex = counter;
		}
	}
	return lowestIndex;
}
