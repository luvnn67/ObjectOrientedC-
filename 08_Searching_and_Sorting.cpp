/** 08_Searching_and_Sorting.cpp
 *	
 *	Arrays Example Program 08 for OOP 2200. In this example, we will 
 *	use implement basic sorting and searching algorithms.
 *	   
 *	@author		Thom MacDonald
 *	@version	2018.01
 *	@since		17 Feb 2018
 *	@see 		Bronson, G. (2012).  Chapter 7 Arrays. 
 *					In A First Book of C++ (4th ed.). 
 *					Boston, MA: Course Technology.
 *	@see		Linear Search: https://youtu.be/8XWgz1YKMtg
 *	@see		Bubble Sort: https://youtu.be/L__rzpaMGQM
 *	@see		Selection Sort: https://youtu.be/JhMja0PwbwA
 *	@see		Binary Search: https://youtu.be/Y2U3xIhPJkU
*/

#include <iostream>
#include <cstdlib> // for system
#include "MyArrayTemplates.h"
using namespace std;
using namespace MyArrayTemplates;


/**	DisplayArray function template
 * 	@param  arrayValues[] - an array of values to display
 * 	@param  SIZE - the size of the array as a const int
 *	@param  width - the minimum field width of each element output;
 					defaults to 5.
*/
template <class T>
void DisplayArray(T arrayValues[], const int SIZE, int width = 5);

int main()
{
	// DECLARATIONS
								    
	const int SIZE = 10; // the size of the sample array
	char letters[SIZE] = 	 { 'o', 't', 'q', 'b', 'x', 'b', 'f', 'g', 'u', 'p'};

	cout << "Arrays Example 08" << endl
		 << "===================" << endl;
	
	cout << "\nLetters array as initialized: ";	 
	DisplayArray(letters, SIZE);
	
	// test LinearSearch
	const char KEY = 'f';
	int indexFound = LinearSearch(letters, SIZE, KEY);
	if(indexFound >= 0)
	{
		cout << "\nLinear Search found \'" << KEY << "\' at position " << indexFound << endl;
	}
	else
	{
		cout << "\nLinear Search could not find \'" << KEY << "\'" << endl;
	}
	
	// test SelectionSort
	cout << "\nSelection Sort took " << SelectionSort(letters, SIZE) << " moves to sort as follows: ";
	DisplayArray(letters, SIZE);
	
	// test BubbleSort
	cout << "\nBubble Sort took " << BubbleSort(letters, SIZE) << " moves to sort as follows: ";
	DisplayArray(letters, SIZE);
	
	
	// test BinarySearch
	//const char KEY = 'f';
	//int indexFound;
	
	// Sort the array first
	cout << "\nSelection Sort took " << SelectionSort(letters, SIZE) << " moves to sort as follows: ";
	DisplayArray(letters, SIZE);
	
	indexFound = BinarySearch(letters, SIZE, KEY);
	if(indexFound >= 0)
	{
		cout << "\nBinary Search found \'" << KEY << "\' at position " << indexFound << endl;
	}
	else
	{
		cout << "\nBinary Search could not find \'" << KEY << "\'" << endl;
	}
	
	// done
	cout << endl << endl;
	return 0;
} // end of main

/**	DisplayArray function template
 * 	@param  arrayValues[] - an array of values to display
 * 	@param  SIZE - the size of the array as a const int
*/
template <class T>
void DisplayArray(T arrayValues[], const int SIZE, int width)
{
	cout << endl;
	for(int index = 0; index < SIZE; index++)
		cout << setw(width) << arrayValues[index];
	cout << endl;
}
