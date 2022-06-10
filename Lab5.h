#include <iostream>

#include <iomanip>

#include <cmath>

#include <limits> // numeric_limits

#include <cfloat> // for limits of a double DBL_MIN and DBL_MAX

#include <string>

#include <stdexcept>

using namespace std;

namespace Lab5

{

bool IsNumeric(string theString);

int main()

{

// DECLARATIONS

const string QUIT = "quit";

int value; // a number

string userInput; // a string

// Output an information header

cout << "Type_Validation" << endl

<< "===============" << endl;

do // loop

{

// INPUT

// Get user input

cout << "\nEnter an integer (\"" << QUIT << "\" to end): ";

getline(cin, userInput);

if(userInput != QUIT) // if the user does not want to quit

{

// PROCESSING

if(IsNumeric(userInput)) // if the input is a valid int

{

// convert the string to an int

value = stoi(userInput);

// OUTPUT

cout << "\nThe integer entered is: " << value << endl;

}

else

{

cerr << "\n\"" << userInput << "\" is not an integer. " << endl;

}

}

} while (userInput != QUIT); // until the user wants to quit

// end of program.

cout << endl << endl;

return 0;

}

// IsNumeric() definition

bool IsNumeric(string theString)

{

string::const_iterator it = theString.begin();

  // we are iterating to every character and checking if

  // it is a number or not

  // to count decimal points

  int countPoint=0,countMinus=0;

while (it != theString.end() && (isdigit(*it)|| *it=='.' || *it=='-')) {

      if(*it=='.')

        countPoint++;

      else if(*it=='-')

        countMinus++;

      ++it;

    }

    // if string is not empty and it pointer is at the end of the string and count of point and count of minus sign is less than or equal to 1 then its a numeric value

return !theString.empty() && it == theString.end() && countPoint<=1 && countMinus<=1;

}

double ReadDouble(const double MIN, const double MAX)

{

double validNumber; // holds the user input

   string input;

      

    // take string input

        getline(cin,input);

if(IsNumeric(input))

    validNumber = stod(input);

  if(!IsNumeric(input)) // if user input is not a number...

    {

    // report the problem to the user.

    cout << "* Invalid input. Please try again and enter a numeric value.\n";

    // Try again by calling the function again (recursion)

    validNumber = ReadDouble(MIN, MAX);

}

  else{

    // convert string to double

      // validNumber = stod(input);

      if(validNumber < MIN || validNumber > MAX){

        cout << " * Invalid input. Please try again and enter a value between "<< MIN << " and " << MAX << ".\n";

        // // Try again by call the function again (recursion)

        validNumber = ReadDouble(MIN, MAX);

      }

    }

// return valid double number

  

   return validNumber;

}

}