#include<iostream>
using namespace std;

int main()
{

	int temp, fahr;

	cout<<"Enter the temperature in celsius: ";

	cin>>temp;

	fahr = (temp * (9/5)) + 32;

	cout<<endl<<"The temperature in fahrenhite is: "<<fahr;

	return 0;
}