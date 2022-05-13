#include<iostream>
using namespace std;

int main()
{
    float average = 0, total = 0;
    int i = 1;
    //for loop
    cout<<"finding average using for loop"<<endl;
    for(i; i <= 10; i++)
    {
        total = total + float(i);
    }

    average = total / 10;
    cout<<"total: "<<total;
    cout<<endl<<"average: "<<average;

    cout<<endl<<endl;
    average = 0, total =0;
    i = 1;
    //while loop
    cout<<"finding average using while loop"<<endl;
    while(i<=10)
    {
        total = total + float(i);
            
        i++;
        //cout<<total;
    }
    average = total / 10;
    cout<<"total: "<<total;
    cout<<endl<<"average: "<<average;

    cout<<endl<<endl;
    average = 0, total =0;
    i = 1;
    //do while loop
    cout<<"finding average using while loop"<<endl;
    do
    {
        total = total + float(i);
            
        i++;
    }while(i<=10);
    average = total / 10;
    cout<<"total: "<<total;
    cout<<endl<<"average: "<<average;

    cout<<endl<<endl;
}