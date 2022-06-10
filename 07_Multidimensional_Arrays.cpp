/** 07_Multidimensional_Arrays.cpp
 *	
 *	Arrays Example Program 07 for OOP 2200. In this example, we will 
 *	use examine multidimensional-arrays.
 *	   
 *	@author		Thom MacDonald
 *	@version	2018.01
 *	@since		17 Feb 2018
 *	@see 		Bronson, G. (2012).  Chapter 7 Arrays. 
 *					In A First Book of C++ (4th ed.). 
 *					Boston, MA: Course Technology.
 *	@see		https://youtu.be/mOsgUqM6RkQ
*/

#include <iostream>
#include <cstdlib> // for system
#include <iomanip> // for output formatting
using namespace std;	

int main()
{
	// DECLARATIONS
	// constants representing the size of each dimension.
	const int ROWS = 3; 
	const int COLUMNS = 4;
	
	// a 2-D array, or matrix of doubles, initialized
	double table[ROWS][COLUMNS] = { 11.1, 12.2, 13.3, 14.4,
								    21.1, 22.2, 23.3, 24.4,
								    31.1, 32.3, 33.3, 34.4};
								    
	cout << "Arrays Example 07" << endl
		 << "===================" << endl 
		 << fixed << setprecision(1);	
	
	cout << "a 2-D array, or matrix of doubles, as initialized: " << endl;
	
	// for each row in the array...
	for(int row = 0; row < ROWS; row++)
	{
		cout << endl; // output a new line
		// for each column in the row...
		for(int column = 0; column < COLUMNS; column++)
		{
			// output the current value in a field of 6 characters
			cout << setw(6) << table[row][column];
		}
	}
	
	// pause the console
//	cout << endl << endl;
//	system("pause");
//
//	const int LAYERS = 2; // constants representing a third dimension.
//	// a 3-D array initialized
//	double box[LAYERS][ROWS][COLUMNS] = {  111.1, 112.2, 113.3, 114.4,
//								    	   121.1, 122.2, 123.3, 124.4,
//								    	   131.1, 132.3, 133.3, 134.4, 
//										   
//										   211.1, 212.2, 213.3, 214.4,
//								    	   221.1, 222.2, 223.3, 224.4,
//								    	   231.1, 232.3, 233.3, 234.4};
//
//	cout << "\n\na 3-D array, as initialized: " << endl;
//	// for each layer in the array...
//	for(int layer = 0; layer < LAYERS; layer++)
//	{
//		cout << endl; // output a new line
//		// for each row in the layer...
//		for(int row = 0; row < ROWS; row++)
//		{
//			cout << endl; // output a new line
//			// for each column in the row...
//			for(int column = 0; column < COLUMNS; column++)
//			{
//				// output the current value in a field of 6 characters
//				cout << setw(6) << box[layer][row][column];
//			}
//		}
//	}
	
	// done.
	cout << endl << endl;
	return 0;
} // end of main


