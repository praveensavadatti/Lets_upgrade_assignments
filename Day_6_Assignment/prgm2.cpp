#include<iostream>
using namespace std;

int main()
{
    int num; 
    char sp[2] =" ";
    cout<<"Enter number of digits required as base : ";
    cin>>num;

    for(int i = 0; i< num+1; i++)
    {
        for(int j = num; j > i; j--)
        {
            cout<<sp;
        }

        for(int k=0; k < i; k++){
            if(i%2 == 0)
                cout<<0<<" ";
            else
                cout<<1<<" ";
        }


        cout<<endl;
    }
}