// Test question 3
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int result, userValue;
    cout << "Enter number to find square root of: ";
    cin >> userValue;

    //math
    if (userValue < 0) {
        cout << "Enter a postive number to find square root of: ";
        cin >> userValue;
    }else {
        float result = sqrt(userValue);
        cout << "The Square Root is " << result;
    }

}