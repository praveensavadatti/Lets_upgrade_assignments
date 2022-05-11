#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	int length, width, area, perimeter;

	cout<<"Enter the length of the rectangle: ";

	cin>>length;

	cout<<"Enter the width of the rectangle: ";

	cin>>width;

	area = length * width;

	perimeter = 2 * (length + width);

	cout<<endl<<"The area of rectangle is: "<<area;
	cout<<endl<<"The perimeter of the rectangle is: "<<perimeter;

	getch();
}