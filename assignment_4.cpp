#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Function that converts temperature
inline double convertTemp(double convert)
{
return ( (convert * 1.8) + 32 );
}

//Function that process output
void outputTemp(double *temp, int numberOfDays)
{
int i;

cout << "\nDAILY TEMPERATURE REPORT\n";
cout << "=========================\n";

cout << fixed << setprecision(2); //two decimal points

//Iterating over each day
for(i=0; i<numberOfDays; i++)
{
cout << "\nDay " << left << setw(3) << (i+1) << right << setw(10) << convertTemp(*(temp+i)) << "\370" << "F" << right << setw(10) << *(temp+i) << "\370" << "C";
}
}

//Returns true if s is a number else false
bool chkNumber(string st)
{
//Iterating over each character
for (int i = 0; i < st.length(); i++)
{
//Checking char by char
if (isdigit(st[i]) == false)
{
return false;
}
}
return true;
}

//Main function
int main()
{
int numberOfDays, i;
double *temp;
string userInput;

while(1)
{


//user input
cout << "\nHow many days do you wish to enter? ";
cin >> userInput;


//check user input for days
if(chkNumber(userInput))
{
//Converting to integer
numberOfDays = stoi(userInput);


//Checking if within range
if(numberOfDays>=1 && numberOfDays<=365)
{
break;
}
else
{
cout << "\n Please try again and enter a value between 1 and 365.\n";
}
}
else
{
cout << "\n Please try again and enter a numeric value.\n";
}
}



try
{
//setting aside memory
temp = new double[numberOfDays];
}

catch(bad_alloc ex)
{
cout << "\n Error allocating memory \n";
}

cout << "\n\nTEMPERATURE REPORTER\n";
cout << "\n===================\n";

// temperature values
for(i=0; i<numberOfDays; i++)
{
cout << "\nCelsius temperature for Day " << (i+1) << ": ";
cin >> *(temp+i);


while(temp[i] < -90 || temp[i] > 60)
{
cout << "\nValue outside the range this is not possible on earth you would die (-90 <= temperature <= 60). Re-enter: ";
cin >> *(temp+i);
}
}

// that outputs the temperature
outputTemp(temp, numberOfDays);

//Free memory
free(temp);

return 0;
}