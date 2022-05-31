#include<iostream>
#include<iomanip>
using namespace std;

int reverse(int);

int main()
{
    int arr[5], rev_arr[5], i, n;

    for(i=0; i < 5; i++)
    {
        cout<<endl<<"Enter elements of an array: ";
        cin>>arr[i];

        n = arr[i];

        rev_arr[i] = reverse(n);
    } 

    

    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<setw(25)<<rev_arr[i]<<endl;
    }
}


int reverse(int num)
{
    int sum, rem;

        sum = 0;

        while(num>0)
        {
            rem = num % 10;
            sum = (sum * 10) + rem;
            num = num / 10;
        }

     

    return sum;
}