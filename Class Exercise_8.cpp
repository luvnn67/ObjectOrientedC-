#include <iostream>

using namespace std;

//function prototypes
int splitNeg(int[], int[], int);
int splitPos(int[], int[], int);
void displayArr(int[], int);


int splitPos(int orignal[], int positive[], int MAX)
{
    int negIndex = 0;

        for (int i = 0; i < MAX; i++)
        {

            if (orignal[i] >= 0)
                positive[negIndex++] = orignal[i];

        }


            return negIndex;

}

int splitNeg(int orignal[], int negative[], int MAX)
{
    int posIndex = 0;

    for (int i = 0; i < MAX; i++)
    {
        if (orignal[i] < 0)
            negative[posIndex++] = orignal[i];

    }

    return posIndex;
}

void displayArr(int newArray[], int used)
{
    for (int i = 0; i < used; i++)
        cout << newArray[i] << endl;
        cout<<"DONE"<<endl;
    return;

}


int main()
{

    const int MAX = 20;
    int positive[MAX];
    int negative[MAX];
    int usedPos, usedNeg;
    int orignal[MAX] = { 77576, -327, 1345, 236, 8, -2343, 32340, 7, -22340, -23413, 1457, 6456, 37561, -4456, 3, 1129, 15, -9, 11232, -1118 };


    usedPos = splitPos(orignal, positive, MAX);
    usedNeg = splitNeg(orignal, negative, MAX);


    cout << "Positive ARRAY: " << endl;
    displayArr(positive, usedPos);
    cout << endl;
    cout << "Negative ARRAY: " << endl;
    displayArr(negative, usedNeg);

    return 0;
}
