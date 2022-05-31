#include<iostream>
using namespace std;

int prime(int);

int main()
{
    int n, ans;

    cout<<"Enter a number: ";
    cin>>n;

    ans = prime(n);
    cout<<endl<<n<<" is a prime number";

}


int prime(int n)
{
    count = 0;
    if(n%prime(n-1) == 0){
        count ++;
    }
    else

}

