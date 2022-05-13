//Program to check wheter student will not be allowed to sit in exam if his/her attendence is less than 75%.
#include<iostream>
using namespace std;

int main()
{
    float class_held, class_attended, percentage;

    cout<<endl<<"Number of classes held: ";
    cin>>class_held;

    cout<<endl<<"Number of classes attended: ";
    cin>>class_attended;

    percentage = (class_attended / class_held) * 100;

    if (percentage < 75)
        cout<<endl<<"student is not allowed to sit in exam";
    else
        cout<<endl<<"student is allowed to sit in exam";
}