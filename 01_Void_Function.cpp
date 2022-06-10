/** Void_Function.cpp
 *	
 *	In this program we define a function that returns nothing and has 
 *	no parameters. 
 *	   
 *	@author		Thom MacDonald
 *	@version	2018.01
 *	@since		Jan 2018
 *	@see 		Bronson, G. (2012).  Chapter 6 Modularity Using Functions. 
 *					In A First Book of C++ (4th ed.). 
 *					Boston, MA: Course Technology.
*/

#include <iostream>
using namespace std;

/**	Hello function
 *	This function displays a simple message to the console window
 *	@param		none
 *	@return		none
 */
 void Hello();

int main()
{
	cout << "Void Functions" << endl
		 << "==============" << endl;
	
	cout << "\nNow we will call our function: " << endl;
	
	Hello(); // call the Hello function
	
	cout << "\nWe are back in main()." << endl;
		
	cout << endl << endl;
	return 0;
} // end of main

// Hello function definition
void Hello() // function header
{ // function body

	cout << "\nHello, world!" << endl; // output message

} // end of Hello()

