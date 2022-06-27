#include<iostream>
using namespace std;
int *p, top, n,i;
void push();
void pop();
void display();
void peep();
void isEmpty();
void isFull();

int main()
{
    top = -1;
    int k;
    cout<<"Enter no of elements in an array: ";
    cin>>n;


    p = new int[n];

    do
    {
        cout<<endl<<"MENU ";
        cout<<endl<<"1. Push";
        cout<<endl<<"2. Pop";
        cout<<endl<<"3. Peep";
        cout<<endl<<"4. is empty";
        cout<<endl<<"5. is full";
        cout<<endl<<"6. Display";
        cout<<endl<<"7. Exit";


    cout<<endl<<"Enter your choice : ";
    cin>>k;
       
    switch(k)
    {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: peep();
                break;
        case 4: isEmpty();
                break;
        case 5: isFull();
                break;
        case 6: display();
                break;
        case 7: exit();
                break;

    }

    } while (top > -1 & top < n);

    

}

void push()
{
    if(top > n-1)
        cout<<"Sorry! you cannot insert element. The stack is full.";
    else{
        
        top ++;
        cout<<endl<<"Enter the element : ";
        cin>>p[top];
    }
}

void pop()
{
    if(top == -1)
        cout<<endl<<"Stack is empty.";
    else
    {
        cout<<endl<<"Stack poped "<<p[top];
        top--;
    }
}

void display()
{
    if(top == -1)
        cout<<endl<<"Stack is empty!";
    else
    {
        for(i=0; i<n; i++)
        {
            cout<<p[i]<<" ";
        }
    }   
}

void peep()
{
    if(top == -1)
        cout<<endl<<"Stack is empty.";
    else
        cout<<endl<<"Stack poped "<<p[top];
}

void isEmpty()
{
    if(top == -1)
        cout<<endl<<"Stack is empty.";
    else
        cout<<endl<<"Stack is not empty.";
}


void isFull()
{
    if(top == n-1)
        cout<<endl<<"Stack is full.";
    else
        cout<<endl<<"Stack is not full.";
}