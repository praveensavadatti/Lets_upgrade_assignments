#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements of an array: ";
    cin>>n;
    cout<<endl;

    int a[n], i, j, k,t;

    for(i=0; i<n; i++)
    {
        cout<<"enter the elemnts of array: ";
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[j]>a[i])
            {
                t=a[j];
                a[j]=a[i];


                for(k=i; k>j; k--)
                {
                    a[k]=a[k-1];
                }

                a[k+1]=t;
            }
        }
    }


    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}