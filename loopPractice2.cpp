/*Question: There is a shop owner who enter the cost price and selling price manually as
an input. Find out wheter he is making a profit or loss. Also find out how much profit or 
loss he is doing.

Approach:

--> take input for profit and loss fron user and stored them
--> defination of profit = selling price > cost price 
--> defination of loss = selling price < cost price 
--> use if loop to check the condition for profit and loss using defination
    - if selling price > cost price then profit
        - to calculate the how much profit use defination
          profit margin = selling price - cost price
    - if selling price < cost price then loss
        - to calculate the how much loss use defination
          loss margin = cost price - selling price
*/


#include <iostream>
using namespace std;

int main(){

    float costPrice, sellingPrice;

    cout<<"Enter yout cost price: ";
    cin>>costPrice;
    cout<<"Enter your selling price: ";
    cin>>sellingPrice;

    if(costPrice<sellingPrice){
        cout<<"The product is making profit"<<endl;
        cout<<"The profit margin for the product is "<<sellingPrice-costPrice<<endl;
    }

    if (costPrice==sellingPrice){
        cout<<"Product is making no loss no profit"<<endl;
    }
    else{
        cout<<"The product is making loss"<<endl;
        cout<<"The loss margin for the product is "<<costPrice - sellingPrice<<endl;
    }

    return 0;
}