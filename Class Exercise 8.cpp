#include <iostream>

using namespace std;

//function prototypes
int splitNeg(int[], int[], int);
int splitPos(int[], int[], int);
void displayArr(int[], int);

int main()
{
    const int MAX = 20;
    int usedPos, usedNeg;
    int orignal[MAX] = { 77576, -327, 1345, 236, 8, -2343, 32340, 7, -22340, -23413, 1457, 6456, 37561, -4456, 3, 1129, 15, -9, 11232, -1118 };
    int posArray[MAX];
    int negArray[MAX];


    usedPos = splitPos(orignal, posArray, MAX);
    usedNeg = splitNeg(orignal, negArray, MAX);


    cout << "Positive Values: " << endl;
    displayArr(posArray, usedPos);
    cout << endl;
    cout << "Negative Values: " << endl;
    displayArr(negArray, usedNeg);

    return 0;
}

int splitPos(int orignal[], int posArray[], int MAX)
{
    int j = 0;

        for (int i = 0; i < MAX; i++)
        {

            if (orignal[i] >= 0)
                posArray[j++] = orignal[i];

        }


            return j;

}

int splitNeg(int orignal[], int negArray[], int MAX)
{
    int k = 0;

    for (int i = 0; i < MAX; i++)
    {
        if (orignal[i] < 0)
            negArray[k++] = orignal[i];

    }

    return k;
}

void displayArr(int newArray[], int used)
{
    for (int i = 0; i < used; i++)
        cout << newArray[i] << endl;
        cout<<"DONE"<<endl;
    return;

}