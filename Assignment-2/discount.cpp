#include<iostream>
using namespace std;

int main()
{
    float quantity, price, total_price, price_to_pay;
    float discount = 10;

    cout<<endl<<"Enter the quantity of product: ";
    cin>>quantity;

    price = 100; //assume price is 100

    total_price = quantity * price;

    price_to_pay = ((100-discount) / 100) * total_price;
    
    
    if (total_price < 1000){
        cout<<endl<<"Total price to be paid is "<<total_price;
    }
    else{
        cout<<endl<<"Total price to be paid is "<<price_to_pay;
    }
       

}