/** Array_ObjectArrays.cpp
 *	
 *	In this example program we created a simple array of objects.
 *   
 *	@author		<YOUR-NAME>
 *	@author		Thom MacDonald
 *	@version	2018.01
 *	@since		3 Mar 2018 <update to today's date>
 *	@see		Bronson, G. (2012).  Chapter 10 Introduction to Classes. 
 *				  In A First Book of C++ (4th ed.). Boston, MA: Course Technology.
*/

#include <iostream>
#include <iomanip>  // for output formatting
#include <cstdlib>  // for rand()
#include <ctime>	// for time()
#include <vector> 	// for vectors
#include "MyPlayingCard.h"	// for class PlayingCard
using namespace std;	

int main()
{
	try
	{
		// DECLARATIONS
		const int CARD_QUANTITY = 5;  // a const to determine the number of cards
		PlayingCard cards[CARD_QUANTITY]; // an array of cards
		
		// Output an information header
		cout << "Object Arrays" << endl
			 << "=============" << endl;
		
		srand(time(NULL)); // seed the random number algorithm 
		
		// PROCESSING
		
		// For each card
		for(int index = 0; index < CARD_QUANTITY; index++)
		{
			// determine a random suit number
			int suit = rand() % PlayingCard::SUITS;
			// determine a random rank number
			int rank = 1 + rand() % PlayingCard::RANKS;
			// set the rank, suit, and flip the current card
			cards[index].SetRank(rank);
			cards[index].SetSuit(suit);
			// flip the current card
			cards[index].FlipCard();
		}
	
		// OUTPUT
		cout << "\nHere are the your cards: " << endl;
		// Using a for loop to traverse the array
		for(int index = 0; index < CARD_QUANTITY; index++)
		{
			// display the card
			cout << "\t" << cards[index].ToString() << endl;		 
		}
		
	}
	catch(const exception& ex) // Inclusion polymorphism:
						   	   //  std::out_of_range thrown, but
						   	   //  std::exception caught. 
	{
		cerr << ex.what(); // display the exception message.
	}
	
	
	// done.
	cout << endl << endl;
	return 0;
} // end of main

