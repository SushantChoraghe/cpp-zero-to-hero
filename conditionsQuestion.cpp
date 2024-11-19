// /*
// Question 1: Take positive integer as an input and check wheter the input is three digit number 
// or not.


// Approch:

// --> positive integer input from user and store it
// --> logic to check 3 digit number - the number should be greater than 99 and less than 1000
// --> use if loop and inside that use "add" condition
//     if the input number is greater than 99 and less than 1000 then it is 3 digit number
// */




// #include <iostream>
// using namespace std;

// int main(){

    
//     const int lowerLimit = 99;
//     const int upperLimit = 1000;
//     int flag = 0;
    
//     do{  
//         int input;

//         cout<<"Enter the positive integer number: "<<endl;
//         cin>>input;

//         if((input>lowerLimit) && (input<upperLimit)){
//             cout<<"The entered number is three digit number"<<endl;
//             flag = 1;
//         }
//         else 
//             cout<<"Enter number again"<<endl;
    
//     }while(flag!=1);

//     return 0;
// }



/*
Question 2: Take any positive integer and tell is it divisible by 5 or 3
*/

// #include <iostream>
// using namespace std;

// int main() {
//     int userInput;

//     cout << "Enter any positive integer number" << endl;
//     cin >> userInput;

//     if ((userInput % 5 == 0) || (userInput % 3 == 0)) {
//         if (userInput % 5 == 0 && userInput % 3 == 0) {
//             cout << "The number is divisible by both 3 and 5" << endl;
//         } 
//         else if (userInput % 5 == 0) {
//             cout << "The number is divisible by 5" << endl;
//         } 
//         else if (userInput % 3 == 0) {
//             cout << "The number is divisible by 3" << endl;
//         }
//     } 
//     else {
//         cout << "The number is not divisible by 3 or 5" << endl;
//     }

//     return 0;
// }



/*
Question 3: Check the enter input is alphabet or not
*/


#include <iostream>
using namespace std;
//97 to 122 for small //65 to 90 for big
int main() {
    char userInput;

    cout << "Enter any alphabet: " << endl;
    cin >> userInput;

    int ascii = (int)userInput;
    if((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90)){
        cout<<"The character is "<< userInput;

    }

    return 0;
}