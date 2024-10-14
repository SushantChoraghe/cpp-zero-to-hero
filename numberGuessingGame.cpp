/*
here we are going to learn about how to use loops and switch statements

Task: You are tasked with building a Number Guessing Game in C++. 
The program should randomly generate a number between 0 and 99, and the user 
must try to guess the number within a limited number of attempts. 
The game should provide feedback after each guess, 
indicating whether the guess was too high, too low, or correct.
*/






/*

Algorithm for problem:

1. first generate random number using rand() function betweeen 0 to 99.
2. ask user to give input number
3. take the input from user
4. if (user number and random number match)
    win
   else
    increase a number of attempt count and ask user again to give input is same or not
5. again ask user want to end the game 
6. make switch cases for selection option


*/


#include<iostream>
#include<sstream>
#include<string>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time() to seed random number
using namespace std;

int main(){
    
    float randomNumber, userGuess, attempt;
    bool endTheGame=true;   
    char wantToPlayAgain;

    // Seed the random number generator
    srand(time(0));

    //do while loop will work until we want to play or not
    do{
        
        // Generate a random number between 1 and 100
        randomNumber = rand() % 100;

        //initiating the attempt count as user has given the input
        attempt = 1;

        //the while loop will work till we get the correct answer or till we used all out attempts

        while(attempt<6){

        //Input from the User
        cout<<"Enter the your guessed number "<<endl;
        cin>>userGuess;

        //if loop to check the userguess are same as random number
        
        if (userGuess == randomNumber){
            cout<<"Congratulation!! You entered correct number "<<randomNumber<<endl;
            break;
        }

        else if (userGuess<randomNumber){
            cout<<"The guess was too low. Try again to guess and enter the number"<<endl;
            attempt++;
            
        }

        else if (userGuess>randomNumber){
            cout<<"The guess was too high. Try again to guess and enter the number"<<endl;
            attempt++;
        }
        }


        //Here after completeing the while loop we are asking user do he want to play again?
        cout<<"Do you want to play again? (y/n) "<<endl;
        cin>>wantToPlayAgain;

        switch (wantToPlayAgain)
        {
        
        case 'y':
            cout<<"Great. Lets play one more time!!"<<endl;
            endTheGame=true;
            break;
        
        
        case 'n':
            cout<<"Good bye";
            endTheGame=false;
            break;

        default:
            cout<<"Invalid Input"<<endl;
            endTheGame=false;           
            break;
        }


    } while(endTheGame);
    
    return 0;
}