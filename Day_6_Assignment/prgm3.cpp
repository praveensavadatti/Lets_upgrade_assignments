#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, i, j, k, sp = 50;

    cout<<"Enter the base of triangle: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<sp; j++)
            cout<<" ";
        for(k=i; k > 0; k--)
            cout<<setw(4)<<k;
        for(j=2; j<=i; j++)
            cout<<setw(4)<<j;

        cout<<endl;
        sp=sp-4;
        
    }       

    


}