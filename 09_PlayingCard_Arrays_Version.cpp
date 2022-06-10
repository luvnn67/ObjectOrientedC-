/** PlayingCard_Arrays_Version.cpp
 *	
 *	In this example program, did the following:
 *		- Added two static arrays with their companion constants to the class
 *		- Changed the string myRank and mySuit attributes to int myRankIndex and mySuitIndex
 *		- Overloaded the parameterized constructor to allow rank/suit initialization by number instead of string
 *		- Modified GetRank() and GetSuit() to work with arrays and indexes
 *		- Overloaded SetRank() and SetSuit to allow setting the rank/suit by number instead of string
 *		- Modified the original SetRank() and SetSuit to to work with arrays and indexes
 *		- Modified the GetDefaultValue() to to work with arrays and indexes
 *		- Wrote a main() function to demonstrate the new key features of the class.* 
 *   
 *	@author		<YOUR-NAME>
 *	@author		Thom MacDonald
 *	@version	2018.02
 *	@since		17 Feb 2018 <update to today's date>
 *	@see		Bronson, G. (2012).  Chapter 10 Introduction to Classes. 
 *				  In A First Book of C++ (4th ed.). Boston, MA: Course Technology.
*/

#include <iostream>
#include <iomanip> 		// for output formatting
#include <cctype>		// for toupper()
#include <stdexcept>	// for invalid_argument
using namespace std;	


class PlayingCard // Class declaration section
{
	public:	
	
		/************************************************************************************
		 *	UPDATE: 
		 *	Add arrays of strings to represent the ranks and suits
		 ************************************************************************************/
		static const int RANKS = 13;
		const string CARD_RANK[RANKS + 1] = 
		{ 
			"Unused", "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", 
			"Eight", "Nine", "Ten", "Jack", "Queen", "King"
		};
	
		static const int SUITS = 4;
		const string CARD_SUIT[SUITS] = { "Spades", "Hearts", "Diamonds", "Clubs" };
	
		/************************************************************************************
		 *	UPDATE: 
		 *	Default constructor take ints instead of strings for rank and suit
		 ************************************************************************************/
		// - by default, the card is a face down Ace of Hearts with a value of 1
		PlayingCard(): myRankIndex(1), mySuitIndex(1), myValue(1), IsFaceUp(false) {}
		
		// Parametrized constructors
		
		/************************************************************************************
		 *	UPDATE: 
		 *	Constructor is overloaded to take ints and well as strings.
		 *  DEFAULT_VALUE_WANTED const used.
		 ************************************************************************************/
		PlayingCard(string rank, string suit, int value = DEFAULT_VALUE_WANTED, bool faceUp = false);
		PlayingCard(int rankIndex, int suitIndex, int value = DEFAULT_VALUE_WANTED, bool faceUp = false);
		
		/************************************************************************************
		 *	UPDATE: 
		 *	GetRank() and GetSuit() return the string located at the rank/suit index
		 ************************************************************************************/
		string GetRank() const { return CARD_RANK[myRankIndex]; } // gets rank name as a string
		string GetSuit() const { return CARD_SUIT[mySuitIndex]; } // gets suit name as a string
		int GetValue() const {return myValue; }   // gets the value of the card
		string ToString() const; // convert the obj to a string.

		
		/************************************************************************************
		 *	UPDATE: 
		 *	SetRank() and SetSuit() are overloaded to take ints and well as strings.
		 ************************************************************************************/
		void SetRank(int rankIndex, bool updateValue = true); // sets the rank by number
		void SetSuit(int suitIndex); // sets the suit

		void SetRank(string rank, bool updateValue = true); // sets the rank by number
		void SetSuit(string suit); // sets the suit
		void SetValue(int value = DEFAULT_VALUE_WANTED); // sets the value

		bool FlipCard() {return (IsFaceUp = !IsFaceUp);} // changes the face up state
			 							  				 // defined in-line
		
		//	Public member variables
		bool IsFaceUp; // true if face-up, false if face-down
	
	private:

		/************************************************************************************
		 *	UPDATES: 
		 *	myRank and mySuit are now ints.
		 ************************************************************************************/
		int myRankIndex; // an int to represent the rank {1 - 13}
		int mySuitIndex; // an int to represent the suit (0 - 3}
		int myValue;   // an int to represent the 'value' of the card. 

		/************************************************************************************
		 *	UPDATE: 
		 *	Added a named const for clarity
		 ************************************************************************************/
		static const int DEFAULT_VALUE_WANTED = -999;
				
		// Private Methods - useful internally
		int GetDefaultValue() const; // gets the default value for the rank
		
}; // end of class declaration section

/** Pause() function
 *	Pauses the program until the user presses the enter key.
 */
inline void Pause() { cout << "\nPress \'Enter\' to continue..."; cin.ignore(); cin.sync(); }

// main() function typically defined first
int main()
{
	// Output an information header
	cout << "PlayingCard Array Version Demo" << endl
		 << "==============================" << endl;

	try
	{
		// DECLARATIONS
		PlayingCard cardObj; // default ctor used
		PlayingCard blackJack("Jack", "Spades", 10, true); // parametrized ctor used
		PlayingCard redQueen(12, 1); // overloaded parameterized ctor used
		
		int inputIndex; // user input index
		string inputString; // user input string
		char menuChoice; // user menu choice
		
		// Display the playing cards as initialized
		cout << "\n\nAs Initialized" << endl
			 << "============================" << endl
			 << "cardObj is   : " << cardObj.ToString() << endl
			 << "blackJack is : " << blackJack.ToString() << endl
			 << "redQueen is  : " << redQueen.ToString() << endl << endl;
			 
		// Flip the face-down cards
		cardObj.FlipCard();
		redQueen.FlipCard();
		
		// Display the playing cards as initialized
		cout << "\n\nAfter Flipping" << endl
			 << "============================" << endl
			 << "cardObj is   : " << cardObj.ToString() << endl
			 << "redQueen is  : " << redQueen.ToString() << endl << endl;
		
	    
	    // pause the output
		Pause(); 
		
		do
		{
			// show a menu
			cout << "\n\nPlease make a selection:" << endl
				 << "==========================" << endl
				 << "A: Change Rank by Name" << endl
				 << "B: Change Rank by Number" << endl
				 << "C: Change Suit by Name" << endl
				 << "D: Change Suit by Number" << endl
				 << "Q: Quit" << endl
				 << "==========================" << endl
				 << ": ";
			// gets users menu choice
			cin >> menuChoice;
			cin.sync();
			// convert their choice to upper case
			menuChoice = toupper(menuChoice);
			
			// based on their choice...
			switch(menuChoice)
			{
				case 'A': 
					// prompt the user
					cout << endl << cardObj.ToString() << "\nEnter a new rank: ";
					// get new attribute from user
					cin >> inputString;
					cin.sync();
					// set the attribute
					cardObj.SetRank(inputString);
					// show the result
					cout << cardObj.ToString() << endl;
					// pause the output
					Pause(); 
					break;
					
				case 'B': 
					// prompt the user
					cout << endl << cardObj.ToString() << "\nEnter a new rank number: ";
					// get new attribute from user
					cin >> inputIndex;
					cin.sync();
					// set the attribute
					cardObj.SetRank(inputIndex);
					// show the result
					cout << cardObj.ToString() << endl;
					// pause the output
					Pause(); 
					break;
					
				case 'C': 
					// prompt the user
					cout << endl << cardObj.ToString() << "\nEnter a new suit: ";
					// get new attribute from user
					cin >> inputString;
					cin.sync();
					// set the attribute
					cardObj.SetSuit(inputString);
					// show the result
					cout << cardObj.ToString() << endl;
					// pause the output
					Pause(); 
					break;
					
				case 'D': 
					// prompt the user
					cout << endl << cardObj.ToString() << "\nEnter a new suit number: ";
					// get new attribute from user
					cin >> inputIndex;
					cin.sync();
					// set the attribute
					cardObj.SetSuit(inputIndex);
					// show the result
					cout << cardObj.ToString() << endl;
					// pause the output
					Pause(); 
					break;
			}
			
		} while (menuChoice != 'Q');
		
		
		
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

// Class definition section (method definitions)

/** NEW! Parametrized Constructor for PlayingCard class
 *  @param	rank: int (a number between 1 and 13)
 *  @param	suit: int (a number between 0 and 3)
 *  @param	faceUp: bool (true if face-up, false if not)
 *	@throws	out_of_range exception if rank or suit params are invalid
 */
PlayingCard::PlayingCard(int rankIndex, int suitIndex, int value, bool faceUp)
{
	// Set the rank and suit with validation
	SetRank(rankIndex); 
	SetSuit(suitIndex);
	if(value == DEFAULT_VALUE_WANTED)
	{
		myValue = GetDefaultValue();
	}
	else
	{
		myValue = value;
	}
	// set the face-up field
	IsFaceUp = faceUp;
}

/** Parametrized Constructor for PlayingCard class
 *  @param	rank: string 
 *  @param	suit: string
 *  @param	faceUp: bool (true if face-up, false if not)
 *	@throws	out_of_range exception if rank or suit params are invalid
 */
PlayingCard::PlayingCard(string rank, string suit, int value, bool faceUp)
{
	// Set the rank and suit with validation
	SetRank(rank); 
	SetSuit(suit);
	if(value == DEFAULT_VALUE_WANTED)
	{
		myValue = GetDefaultValue();
	}
	else
	{
		myValue = value;
	}
	// set the face-up field
	IsFaceUp = faceUp;
}

/** New! SetRank Method for PlayingCard class
 *	Sets the rank of this PlayingCard object.
 *  @param	rankIndex: int
 *  @param  updateValue: bool (defaults to true)
 *	@throws	invalid_argument exception if the param is invalid
 */
void PlayingCard::SetRank(int rankIndex, bool updateValue)
{
  	// if the parameter is valid
	if(rankIndex > 0 && rankIndex <= RANKS) // simple range check
	{
	   	// set myRankIndex to the rankIndex parameter
		myRankIndex = rankIndex;
	   	
	   	// if update value parameter is true   
		if(updateValue)
	   	{
	   		// set myValue to the default value
			myValue = GetDefaultValue();
		}
	}
	else // rank parameter is not valid
	{
		// throw an appropriate exception
		throw invalid_argument(to_string(rankIndex) + " is not a recognized playing card rank.");
	}
}

/** Updated! SetRank Method for PlayingCard class
 *	Sets the rank of this PlayingCard object.
 *  @param	rank: string
 *  @param  updateValue: bool (defaults to true)
 *	@throws	invalid_argument exception if the param is invalid
 */
void PlayingCard::SetRank(string rank, bool updateValue)
{
	bool valid = false; // is the parameter a valid rank
	int rankIndex = 1; 	// holds the index of the rank in the rank array if valid
	
	// for each possible rank until we find a match
	while(!valid && rankIndex <= RANKS)
	{
		if(rank == CARD_RANK[rankIndex])
		{
			valid = true; // a match was found
		}
		else
		{
			 rankIndex++; // next index
		}
	}
	
  	// if the parameter is valid
	if(valid) 
	{
	   	// set myRankIndex to the rankIndex found
		myRankIndex = rankIndex;
	   	
	   	// if update value parameter is true   
		if(updateValue)
	   	{
	   		// set myValue to the default value
			myValue = GetDefaultValue();
		}
	}
	else // rank parameter is not valid
	{
		// throw an appropriate exception
		throw invalid_argument(rank + " is not a recognized playing card rank.");
	}
}

/** New! SetSuit Method for PlayingCard class
 *	Sets the suit of this PlayingCard object.
 *  @param	suitIndex: int 
 *	@throws	invalid_argument exception if the param is invalid
 */
void PlayingCard::SetSuit(int suitIndex)
{
	// if the suit parameter is valid
	if(suitIndex >= 0 && suitIndex < SUITS)
	{
	   	// set mySuitIndex to the parameter
		mySuitIndex = suitIndex;
	}
	else // suit parameter is not valid
	{
		// throw an appropriate exception
		throw invalid_argument(to_string(suitIndex) + " is not a recognized playing card suit.");
	}
}

/** Updated! SetSuit Method for PlayingCard class
 *	Sets the suit of this PlayingCard object.
 *  @param	suit: string 
 *	@throws	invalid_argument exception if the param is invalid
 */
void PlayingCard::SetSuit(string suit)
{
	bool valid = false; // is the parameter a valid rank
	int suitIndex = 0; 	// holds the index of the suit in the suit array if valid	
	
	// for each possible suit until we find a match
	while(!valid && suitIndex < SUITS)
	{
		if(suit == CARD_SUIT[suitIndex])
		{
			valid = true; // a match was found
		}
		else
		{
			suitIndex++; // next index
		}
	}
	
	// if the suit parameter is one of the valid suits
	if(valid)
	{
	   	// set mySuitIndex to the suitIndex found
		mySuitIndex = suitIndex;
	}
	else // suit parameter is not valid
	{
		// throw an appropriate exception
		throw invalid_argument(suit + " is not a recognized playing card suit.");
	}
}

/** SetValue Method for PlayingCard class
 *	Sets the suit of this PlayingCard object.
 *  @param	value: int (defaults to -999) 
 */
void PlayingCard::SetValue(int value)
{
	// if the value parameter is -999 the likely cause is that it defaulted to -999
	if(value == DEFAULT_VALUE_WANTED) 
	{
	   	// set myValue to the default value
		myValue = GetDefaultValue();
	}
	else // value was specified
	{
		// set myValue to the parameter
		myValue = value;
	}
}

/** Updated! ToString Method for PlayingCard class
 *	Converts the obj to a string.
 *	@return	the obj state as a string
 */
string PlayingCard::ToString() const
{
	// declare an empty string
	string cardString;
	
	// if the card is face-up
	if(IsFaceUp)
	{
		// build a descriptive string from the obj state
		cardString = CARD_RANK[myRankIndex] + " of " + CARD_SUIT[mySuitIndex] + " (" + to_string(myValue) + ")";
	}
	else // card is face-down
	{
		// string indicates face-down
		cardString = "Face-Down";
	}
	// return the string
	return cardString;
}

/** Updated! GetDefaultValue Method for PlayingCard class
 *	Determines and returns the default value for the card based on its rank. 
 *	@return	the default value for the card.
 */
int PlayingCard::GetDefaultValue() const
{
	// set default value to 10
	int defaultValue = 10; // Jack, King, Queen
	
	// if rank is Ace or One through Nine, 
	// 	 update default value accordingly
	
//	if(myRank == "Ace")  
//	{
//		defaultValue = 1;
//	} 
//	else if(myRank == "Two")
//	{
//		defaultValue = 2;
//	} 
//	else if(myRank == "Three")
//	{
//		defaultValue = 3;
//	}  
//	else if(myRank == "Four")
//	{
//		defaultValue = 4;
//	} 
//	else if(myRank == "Five")
//	{
//		defaultValue = 5;
//	} 
//	else if(myRank == "Six")
//	{
//		defaultValue = 6;
//	} 
//	else if(myRank == "Seven" )
//	{
//		defaultValue = 7;
//	}  
//	else if(myRank == "Eight")
//	{
//		defaultValue = 8;
//	} 
//	else if(myRank == "Nine")
//	{
//		defaultValue = 9;
//	}	// There must be a better way to do this! 

	if(myRankIndex < defaultValue)
	{
		defaultValue = myRankIndex; // much simpler
	}
	
	// return default value
	return defaultValue;
}
