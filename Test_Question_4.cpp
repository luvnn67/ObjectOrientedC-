//  Test Questin 4

#include <iostream>
using namespace std;

int main()
{
    int grades;
    cout << "Enter a your class Grade ";
    cin >> grades;
    while (grades <100 && grades >= 0){
        if (grades >= 90){
            cout << "You got an A" <<endl;  
        }else if (grades >= 80 && grades < 90){
            cout << "You got a B" <<endl;
        }else if (grades >= 70 && grades < 80){
            cout << "You got a C" <<endl;
        }else if (grades >= 60 && grades < 70){
            cout << "You got a D"<<endl;
        }else{
            cout << "You got a F" <<endl;
        }
        cout << "Enter a your class Grade ";
        cin >> grades;
    }

}