#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, i, j ,sp;

    cout<<"Enter the base of triangle: ";
    cin>>n;

    sp = ((n*2)-3)*4;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            cout<<setw(4)<<j;
        
        for(j=1; j<=sp; j++)
            cout<<" ";
        
        if(i!=n)
        {
            for(j=i; j>0; j--)
            cout<<setw(4)<<j;
        }
        else
        {
            for(j=i-1; j>0; j--)
            cout<<setw(4)<<j;
        }

        cout<<endl;
        sp=sp-8;
        
    }       

}