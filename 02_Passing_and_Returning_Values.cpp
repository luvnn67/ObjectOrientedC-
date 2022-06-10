/** Passing_and_Returning_Values.cpp
 *	
 *	In this program we define a function that takes a parameter by value 
 *	and returns a value. 
 *	   
 *	@author		Thom MacDonald
 *	@author		<your name>
 *	@version	2018.01
 *	@since		Jan 2018
 *	@see 		Bronson, G. (2012).  Chapter 6 Modularity Using Functions. 
 *					In A First Book of C++ (4th ed.). 
 *					Boston, MA: Course Technology.
*/

#include <iostream>
#include <iomanip>
using namespace std;

/**	ConvertFahrenheitToCelsius function
 *	@param		fahrenheit - The temperature converting from in °F
 *	@return		The converted temperature in °C
*/
double ConvertFahrenheitToCelsius(double fahrenheit);  // function prototype

int main()
{
	// DECLARATIONS
	const double FAHRENHEIT = 100.0; // named constant to represent the °F 
	const char DEGREE_SYMBOL = (char)248; // ASCII degree symbol
	double celsius;	// variable to represent the °C temperature	
	
	// function call
	celsius = ConvertFahrenheitToCelsius(FAHRENHEIT);
	
	// OUTPUT
	cout << "Passing and Returning Values" << endl
		 << "============================" << endl
		 << fixed << setprecision(1);
		 
	cout << FAHRENHEIT << DEGREE_SYMBOL << "F converts to " 
		<< celsius << DEGREE_SYMBOL << "C." << endl;
	
	// done.
	cout << endl << endl;
	return 0;
} // end of main

//	ConvertFahrenheitToCelsius function definition
double ConvertFahrenheitToCelsius(double fahrenheit)  // function header
{	// function body
  // return Celsius temperature formula
  return (5.0/9.0) * (fahrenheit - 32.0);
}
