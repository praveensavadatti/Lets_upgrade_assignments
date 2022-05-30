#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int n, i, power, temp, sum, rem;

    cout<<"Enter the end value of the range: ";
    cin>>n;

    for(i=1; i<n; i++)
    {
        power = 0;

        temp = i;

        while(temp>0)
        {
            power++;
            temp /= 10;
        }
        //cout<<power;

        sum = 0;

        temp = i;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + pow(rem, power);
            temp /= 10;
        }

        //cout<<sum<<" "<<i<<endl;

        if(sum == i)
            cout<<i<<" ";


    }   
}