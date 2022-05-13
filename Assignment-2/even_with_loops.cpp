#include<iostream>
using namespace std;

int main()
{
    
    //for loop
    cout<<"print even numbers between 1 to 10 using for loop"<<endl;
    for(int i = 1; i <= 10; i++)
    {
        if (i%2 == 0)
            cout<<i<<" ";
    }

    cout<<endl<<endl;
    int i = 1;
    //while loop
    cout<<"print even numbers between 1 to 10 using while loop"<<endl;
    while(i<=10)
    {
        if (i%2 == 0){
            cout<<i<<" ";
        }
            
        i++;
    }

    cout<<endl<<endl;
    int j = 1;
    //do while loop
    cout<<"print even numbers between 1 to 10 using while loop"<<endl;
    do
    {
        if (j%2 == 0){
            cout<<j<<" ";
        }
            
        j++;
    }while(j<=10);

    cout<<endl<<endl;
}