#include<iostream>
using namespace std;

int main()
{
    int marks;

    cout<<endl<<"Enter marks obtained: ";
    cin>>marks;

    if(marks < 25)
        cout<<"You have obtained grade F";
    else if (marks > 25 && marks < 46)
        cout<<"You have obtained grade E";
    else if (marks > 45 && marks < 51)
        cout<<"You have obtained grade D";
    else if (marks > 50 && marks < 61)
        cout<<"You have obtained grade C";
    else if (marks > 60 && marks < 81)
        cout<<"You have obtained grade B";
    else
        cout<<"You have obtained grade A";
}