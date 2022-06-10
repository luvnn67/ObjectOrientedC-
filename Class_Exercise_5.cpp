#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{   
    int grades;
    cout << "Enter a your class Grade. To quit type 999 " << endl;
    cin >> grades;
    
}


int gradepoint()
{
  int grades;
  while (grades >= 0 && grades <=100){
    if (grades >= 90){
        cout << "You got an A" <<endl;  
        main();
        continue;
    }else if (grades >= 80 && grades < 90){
        cout << "You got a B" <<endl;
        main();
        continue;
    }else if (grades >= 70 && grades < 80){
        cout << "You got a C" <<endl;
        main();
        continue;
    }else if (grades >= 60 && grades < 70){
        cout << "You got a D"<<endl;
        main();
        continue;
    }else if (grades <= 59){
        cout << "You got a F" <<endl;
        main();
        continue;
    }else if (grades == 999){
        exit(0);
        break;
    }else{
        cout << "Please enter a valid input" <<endl;
        main();

    }
  }    

}

int calulation(){
  main();
  gradepoint();
  

}






    


