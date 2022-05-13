#include<iostream>
using namespace std;

int main()
{

	int a,b,reminder,quotient;

	cout<<"Enter two numbers: ";

	cin>>a>>b;

	reminder = a % b;

    quotient = a / b;

    cout<<"reminder: "<<reminder;

    cout<<endl<<"quotient: "<<quotient;

	return 0;
}