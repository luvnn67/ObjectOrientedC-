#include <iostream>

using namespace std;

class BoxVolume
{
public:
    void readData()
    {
        cout << "length: ";
        cin >> length;
        cout << "width: ";
        cin >> width;
        cout << "height: ";
        cin >> height;
    }

    float computeVolume()
    {
        return length * width * height;
    }

    void dispData()
    {
        //using namespace std  // this is artistic I couldnt cancel it
        cout << "Volume is: " << computeVolume() << endl;

    }

private:
    float length;
    float width;
    float height;
};

int main()
{
    BoxVolume obj1,obj2,obj3;
    obj1.readData();
    obj2.computeVolume();  // data undefined for obj2
    obj3.dispData();       // data undefined for obj3
};