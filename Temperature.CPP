#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	int temp, fahr;

	cout<<"Enter the temperature in celsius: ";

	cin>>temp;

	fahr = (temp * (9/5)) + 32;

	cout<<endl<<"The temperature in fahrenhite is: "<<fahr;

	getch();
}


