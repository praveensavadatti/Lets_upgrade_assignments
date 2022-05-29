#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, i, j, k=1, sp=0;

    cout<<"Enter the base of triangle: ";
    cin>>n;


    for(i=1; i<=n; i++)
    {

        if(i==1)
        {
            for(j=1; j<=n-i; j++)
                cout<<setw(4)<<j;

            // for(j=1; j<=sp; j++)
            //     cout<<" ";

            for(j=n-i+1; j>0; j--)
                cout<<setw(4)<<j;
        }
        else
        {
            for(j=1; j<=n-i+1; j++)
                cout<<setw(4)<<j;

            for(j=1; j<=sp; j++)
                cout<<" ";

            for(j=n-i+1; j>0; j--)
                cout<<setw(4)<<j;
        }
        

        cout<<endl;
        sp= k * 4;
        k = k + 2;
    }       

}