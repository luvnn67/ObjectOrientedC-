// Test Question 2
#include <iostream>
using namespace std;

int main()
{
    int grades;
    cout << "Enter a your class Grade ";
    cin >> grades;
    if (grades >= 90){
        cout << "You got an A";  
    }else if (grades >= 80 && grades < 90){
        cout << "You got a B";
    }else if (grades >= 70 && grades < 80){
        cout << "You got a C";
    }else if (grades >= 60 && grades < 70){
        cout << "You got a D";
    }else{
        cout << "You got a F";
    }

}