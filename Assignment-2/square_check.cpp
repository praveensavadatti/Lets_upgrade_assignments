#include<iostream>
using namespace std;

int main()
{

	int length, width, area, perimeter;

	cout<<"Enter the length of the rectangle: ";

	cin>>length;

	cout<<"Enter the width of the rectangle: ";

	cin>>width;

	if (length == width)
        cout<<endl<<"The co-ordinates given form a square. ";
    else
        cout<<endl<<"The co-ordinates given form a rectangle. ";
    
	return 0;
}