#include <iostream>
#include <string> 
using namespace std; 

class rectangle
{
private:
	double width;
	double height;


public:
	rectangle(double w, double h)
	{
		width = 0;
		height = 0;
	}

public:

	rectangle(){}

double set_width(double w)
{
	width = w;
	return w;
}

double set_height(double h)
{
	height = h;
	return h; 
}

double get_width()
{
	return height;
}

double get_height()
{
	return height;
}

double get_area()
{
	return width * height;
}


double get_perimeter()
{
	return 2 * (width +  height);
}


};

int main()
{   double widths, heights;
	rectangle r1;
    cout << "Enter the Width: ";
    cin >> widths;
    cout << "Enter the Height: ";
    cin >> heights;

	r1.set_width(widths);
	r1.set_height(heights);
    r1.get_height();
    r1.get_width();
	
	cout << "The area of rectangle is: " <<r1.get_area() << endl;
	cout << "The perimeter of rectangle is: " << r1.get_perimeter() << endl;
    cout << "The height is: "<< r1.get_height()<<endl;
    cout << "The width is: "<< r1.get_width()<<endl;


	return 0;
}