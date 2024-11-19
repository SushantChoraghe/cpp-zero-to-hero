// /*
// Question 1: Take positive integer input and check is if odd or even

// Approach:

// --> ask user to give a number
// --> store the number in variable
// --> criteria for even - divide the input by 2 and remainder is 0
//     criteria for odd - divide the input by 2 and remainder is 1
// --> use if statement to check the remainders
// */

// #include <iostream>
// using namespace std;

// int main(){

//     int positiveInteger;

//     cout<<"Enter the positive integer: ";
//     cin>>positiveInteger;

//     if(positiveInteger%2==0){
//         cout<<"The input positive integer is  even!!";
//     }
//     else
//         cout<<"The input positive integer is odd!!";
        
//     return 0;
// }





// /*
// Question 2: Take positive integer input and check is it divisible by 5

// Approach:

// --> ask user to give a number
// --> store the number in variable
// --> criteria for pass - divide the input by 5 and remainder is 0
//     criteria for fail - divide the input by 5 and remainder is not zero
// --> use if statement to check the remainders
// */

// #include<iostream>
// using namespace std;

// int main(){

//     int positiveInteger;

//     cout<<"Enter an any positive integer: ";
//     cin>>positiveInteger;

//     if(positiveInteger%5==0){
//         cout<<"The Entered number "<<positiveInteger<<" is divisible by 5";
//     }
//     else
//         cout<<"The Entered number "<<positiveInteger<<" is not divisible by 5. Failed";

//     return 0;
// }



/*
Question 3: Find the absoolute value of an integer

Approach: 

--> Ask user to give an integer value
--> store it in variable
--> defination of absolute value - the positive value of integer number ir modulos of number
--> if to check the number is below zero if yes then reverse the sign else pring as it is.
*/


// #include<iostream>
// using namespace std;

// int main(){

//     int integerNumber;

//     cout<<"Enter an integer number: ";
//     cin>>integerNumber;

//     if(integerNumber<0){
//         cout<<"The absolute value of "<<integerNumber<<" is "<<-(integerNumber);}

//     else
//         cout<<"The absolute value of "<<integerNumber<<" is "<<(integerNumber);

//     return 0;
// }
