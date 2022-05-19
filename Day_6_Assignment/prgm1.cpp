#include<iostream>
using namespace std;

int main()
{
    int num; 
    char sp[2] =" ";
    cout<<endl<<"Enter base of traingle pattern : ";
    cin>>num;

    for(int i = 1; i< num+1; i++)
    {
        for(int j = num; j > i; j--)
        {
            cout<<sp;
        }

        for(int k=1; k < i; k++){
            cout<<(k);
        }

        for(int k=i; k > 0; k--){
            cout<<(k);
        }
        cout<<endl;
    }
}