include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<iomanip>
using namespace std;
//PayRecord structure
struct PayRecord
{
   string firstName;
   string lastName;
   float numHours;
   float ratePerHour;
};
//set constant
#define NUM_RECORDS 5
int main()
{
   //create an array of structure,PayRecord of size,5
   PayRecord records[NUM_RECORDS];
   int index=0;
   float pay=0;
   float totalPay=0;

   string inputFileName="hours.txt";
   string outputFileName="pay.txt";

   //Open input file
   ifstream fin(inputFileName);
   //check if file does not exist
   if(!fin)
   {
       cout<<inputFileName<<" does not exist."<<endl;
       cout<<"Closing the program..."<<endl;
       return EXIT_FAILURE;
   }
   //read data from file hours.txt into the structure array
   while(fin>>records[index].firstName
       >>records[index].lastName
       >>records[index].numHours
       >>records[index].ratePerHour && index<NUM_RECORDS)
   {
       index++;
   }

   //close the input file stream
   fin.close();
  

   //Open output file
   ofstream fout;
   fout.open(outputFileName);
   //write to the pay.txt file
   fout<<"YOUR NAME"<<endl;
   fout<<"PAY FOR THIS WEEK"<<endl;
   fout<<"==================="<<endl;
   fout<<endl;
   for(index=0;index<NUM_RECORDS;index++)
   {      
       //calculate pay value
       pay=records[index].numHours*records[index].ratePerHour;
       //add pay to total pay
       totalPay+=pay;
       //get first letter of first name
       char initial=records[index].firstName[0];
       //create object of stringstream class
       stringstream ss;
       //append intial and last name using stringstream object
       ss<<initial<<". "<<records[index].lastName;

       fout<<right<<setw(20)<<ss.str()<<"\t"<<"$"
           <<fixed<<setprecision(2)<<"\t"<<pay<<endl;
   }
   fout<<endl;
   fout<<"==================="<<endl;
   fout<<right<<setw(25)<<"Total:"<<"\t"<<"$"
           <<fixed<<setprecision(2)<<"\t"<<totalPay<<endl;
   //close the output file stream
   fout.close();

   cout<<"pay.txt complete"<<endl;
   /*Pause output on console until user enter
   any key on keyboard */
   system("pause");
   return 0;
}