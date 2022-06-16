#include<iostream>
using namespace std;
int i,j,k,t;
void selection_sort(int[], int);
void bubble_sort(int[], int);



int main()
{
    int n;
    
    cout<<"Enter the number of elements in an array: ";
    cin>>n;

    int arr[n];

    for(i=0; i<n; i++)
    {
        cout<<"enter value in a["<<i<<"]: ";
        cin>>arr[i];
    }

    cout<<endl<<"Selection sort array: "<<endl;
    selection_sort(arr, n);
    cout<<endl<<"Bubble sort array: "<<endl;
    bubble_sort(arr, n);
}

void selection_sort(int a[], int n)
{
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }

    for(i=0; i<n; i++)
        cout<<a[i]<<endl;
}

void bubble_sort(int s[], int n)
{
    for(i=0; i<n-1; i++)
    {
        for(j=i; j<n-1; j++)
        {
            if(s[j]>s[j+1])
            {
                t = s[j]; 
                s[j] = s[j+1];
                s[j+1] = t;
            }
            
            // for(i=0; i<n; i++)
            //     cout<<s[i]<<" ";
            // cout<<endl;
            
        }

    }

    for(i=0; i<n; i++)
        cout<<s[i]<<endl;
}
