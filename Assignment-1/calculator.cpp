#include<iostream>
using namespace std;

int main()
{
    int a, b;
    char c;

    cout<<"enter two numbers for mathematical operation: ";
    cin>>a>>b;

    cout<<endl<<"enter the operator: ";
    cin>>c;

    switch(c){
        //check for operator
        case '+':
            cout<<"The addition of both the number is: "<<a+b;
            break;
        case '-':
            cout<<"The substraction of both the number is: "<<a-b;
            break;
        case '*':
            cout<<"The multiplication of both the number is: "<<a*b;
            break;
        case '/':
            cout<<"The division of both the number is: "<<a/b;
            break;

    }

    return 0;
}