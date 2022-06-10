/** MyArrayTemplates.h
 *	
 *	A reusable library of array function templates.
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

#ifndef MY_ARRAY_TEMPLATES

#define MY_ARRAY_TEMPLATES

#include <iostream>
#include <cstdio> 	
#include <cstdlib>
#include <iomanip>

using namespace std;

namespace MyArrayTemplates
{
	/**	LinearSearch function template
	 * @param  sourceList[] - an array of values to search
	 * @param  SIZE - the size of the array as a const int
	 * @param  key 	- the value we are searching for
	 * @return first position where the key if found; 
	 		   if not found, -1	
	*/
	template <class T>
	int LinearSearch(T sourceList[], const int SIZE, T key)
	{
		int foundAtIndex = -1; // hold the index where the key is found, 
							   // -1 indicates not found
		// loop until the key is found or the end of the array is reached
		for (int index = 0; foundAtIndex == -1 && index < SIZE; index++)
		{
			// if the current element contains the key value
			if (sourceList[index] == key)
			{
				// set the found at index
				foundAtIndex = index;
			}
		}
		return foundAtIndex; // return the found at index
	}
	
	/**	BinarySearch function template
	 * @param  sourceList[] - an array of values to search
	 * @param  SIZE - the size of the array as a const int
	 * @param  key 	- the value we are searching for
	 * @return first position where the key if found; 
	 		   if not found, -1	
	*/
	template <class T>
	int BinarySearch(T sourceList[], const int SIZE, T key)
	{
		int left = 0;			// the index of the left-hand of the array
		int right = SIZE - 1; 	// the index of the right-hand of the array
		int midPoint; 		    // the middle point between left and right
		int foundAtIndex = -1;  // holda the index where the key is found, 
							    // -1 indicates not found
  		
  		// as long and the left index is <= the right index
  		// and we have not found the key yet
		while (foundAtIndex == -1 && left <= right)
  		{
    		// calculate the middle point
			midPoint = (left + right) / 2;
			// Is the middle point the key?
			if (key == sourceList[midPoint])
    		{
      			foundAtIndex = midPoint;
    		}
    		// otherwise, if the key is larger...
    		else if (key > sourceList[midPoint])
    		{
    			// only search from the next element and up.
      			left = midPoint + 1;
      		}
    		else // otherwise...
    		{
    			// only search from the next element and down
				right = midPoint - 1;
    		}
  		}
		return foundAtIndex; // return the found at index
	}
	
	/**	SelectionSort function template
	 * 	Finds the index containing the lowest value in the array and swaps that 
	 *  element with the first element. Then it finds the next lowest and swaps 
	 *  with the second position. This repeats until the second last position 
	 *  of the array. 
	 *
	 * 	@param  arrayValues[] - an array of values to sort
	 * 	@param  SIZE - the size of the array as a const int
	 * 	@return the number of moves needed to sort the array
	*/
	template <class T>
	int SelectionSort(T arrayValues[], const int SIZE)
	{	
		int minIndex; 	// the index of the lowest value in the 
					  	// sub-set of the array that isn't sorted 
		int moves = 0;  // the number of moves needed to sort the array
		
		// for each element of the array up to the second last...
  		for (int index = 0; index < (SIZE - 1); index++)
 	  	{
			// Find the lowest value 
	    	minIndex = index; // assume lowest value is at this array element
	    	// compare it with the rest of the array
	    	for(int nextIndex = index + 1; nextIndex < SIZE; nextIndex++)
	    	{
				// if we've located a lower value
				if (arrayValues[nextIndex] < arrayValues[minIndex]) 
	      		{                 
					// record it's position
	        		minIndex = nextIndex;
	      		}
	    	} // at this point we know the lowest value is at minIndex
	    	
			// if we have a new minimum
	    	if (arrayValues[minIndex] < arrayValues[index]) 
	    	{                     
				// swap values
	      		T temp = arrayValues[index];
	      		arrayValues[index] = arrayValues[minIndex];
	      		arrayValues[minIndex] = temp;
	      		moves++;
	    	} // end of swap
	  	} // next index
	
		return moves; // the number of swaps we needed to make
	}
	
	/**	BubbleSort function template
	 *	Compare neighbouring elements in array. Swap if required. Repeat 
	 *	SIZE - 1 times throughout full array. 
	 *
	 * 	@param  arrayValues[] - an array of values to sort
	 * 	@param  SIZE - the size of the array as a const int
	 * 	@return the number of swaps needed to sort the array
	*/
	template <class T>
	int BubbleSort(T arrayValues[], const int SIZE)
	{	
		int moves = 0;  // the number of moves needed to sort the array

		// Repeat SIZE -1 times...
  		for (int repeat = 0; repeat < (SIZE - 1); repeat++)
		{
			// for each element of the array starting with the second element...
  			for (int index = 1; index < SIZE; index++)
			{
      			// if this element value is smaller than the one before it...
				if (arrayValues[index] < arrayValues[index - 1])
				{
					// swap them
					T temp = arrayValues[index];
					arrayValues[index] = arrayValues[index - 1];
					arrayValues[index - 1] = temp;
					moves++; // increase the moves counter
				}	
        
      		} // next index
    	} // repeat	
		return moves; // the number of swaps we needed to make
	}
	
}
#endif // end of ifndef MY_ARRAY_TEMPLATES
