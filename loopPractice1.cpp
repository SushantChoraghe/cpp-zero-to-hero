/*
Question: Take positive integer input and check is if odd or even

Approach:

--> ask user to give a number
--> store the number in variable
--> criteria for even - divide the input by 2 and remainder is 0
    criteria for odd - divide the input by 2 and remainder is 1
--> use if statement to check the remainders
*/

#include <iostream>
using namespace std;

int main(){

    int positiveInteger;

    cout<<"Enter the positive integer: ";
    cin>>positiveInteger;

    if(positiveInteger%2==0){
        cout<<"The input positive integer is  even!!";
    }
    else
        cout<<"The input positive integer is odd!!";
        
    return 0;
}