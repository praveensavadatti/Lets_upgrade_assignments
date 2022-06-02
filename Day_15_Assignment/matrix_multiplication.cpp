#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int arr1[3][3], arr2[3][3], i, j, k, multi[3][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<endl<<"Enter elements of array1: ";
            cin>>arr1[i][j];
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<endl<<"Enter elements of array2: ";
            cin>>arr2[i][j];
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            multi[i][j] = 0;
        }
    }

    //multiplication
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                multi[i][j] += (arr1[i][k] * arr2[k][j]);
                //cout<<multi[i][j];
            }
           // cout<<endl;
        }
    }

    cout<<endl<<"Multiplication of array1 and array2 is : "<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            
            cout<<setw(4)<<multi[i][j];
        }

        cout<<endl;
    }


    
}