/** 06_Arrays_to_Function_Templates.cpp
 *	
 *	Arrays Example Program 06 for OOP 2200. In this example, we will 
 *	pass an array to function template as an argument.
 *	   
 *	@author		Thom MacDonald
 *	@version	2018.01
 *	@since		17 Feb 2018
 *	@see 		Bronson, G. (2012).  Chapter 7 Arrays. 
 *					In A First Book of C++ (4th ed.). 
 *					Boston, MA: Course Technology.
 *	@see		https://youtu.be/DzIWeryyd3Y
*/

#include <iostream>
#include <iomanip> // for output formatting
using namespace std;	

/**	AverageOfArray function template
 *	@param		arrayValues[] - an array
 *	@param		SIZE - the size of the array
 *	@return		the average value of the array
*/
template <class T>
T AverageOfArray(T arrayValues[], const int SIZE);

int main()
{
	// DECLARATIONS
	const int SIZE = 4;  // 'Companion' to the array
	
	// an array of double variables to hold test scores
	double studentTestGrades[SIZE] = {65.5, 65.4, 64.8, 65.0};
	
	// an array of int variables to hold daily stock levels
	int dailyStockLevels[SIZE] = {10, 4, 2, 15};
	
	// an array of long doubles variables to hold very precise measurements
	long double preciseMeasurements[SIZE] = 
	{ 
		0.654645616545645165465787887876546665448,
		0.478877899887165454145641654651465611454, 
		0.878746452313264565465565465465564564456,
		0.546656545121548787876545665456465464578
	};
	
	
	// OUTPUT
	cout << "Arrays Example 06" << endl
		 << "===================" << endl << fixed;	 
		 
	cout << "\nThe average test score was " << setprecision(3)
		 << AverageOfArray(studentTestGrades, SIZE) << endl;
		 
	cout << "\nThe average daily stock level was " 
		 << AverageOfArray(dailyStockLevels, SIZE) << endl;
		 
	cout << "\nThe average precise measurement was " << setprecision(40)
		 << AverageOfArray(preciseMeasurements, SIZE) << endl;
	
	// done.
	cout << endl << endl;
	return 0;
} // end of main

//	averageArrayValue function template
template <class T>
T AverageOfArray(T arrayValues[], const int SIZE)
{
	T sumOfValues = 0.0;
	for(int counter = 0; counter < SIZE; counter++)
	{
		// add this element value to the sum
		sumOfValues += arrayValues[counter];
	}
	// calculate the average by dividing the sum by the test count
	return (sumOfValues / SIZE);
}
