// C++ Program which requests the user to enter 4 interger numbers and print sum and avg
#include <iostream>
using namespace std;

int main()
{
    int number1, nurmber2, number2, number3, number4, sumofnumbs, avgofnumbs;
    cout << "Enter 1st number ";
    cin >> number1;
    cout << "Enter 2nd number ";
    cin >> nurmber2;
    cout << "Enter 3rd number ";
    cin >> number3;
    cout << "Enter 4th number ";
    cin >> number4;

    // Sum and Average
    sumofnumbs = number1 + number2 + number3 + number4;
    cout << "The sum is: "<< sumofnumbs << endl;
    avgofnumbs = sumofnumbs/4;
    cout << "The avg is : "<< avgofnumbs;

}