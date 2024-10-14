/*here is the basic calculate to show the basic learned skills as follows,
1. basic structure
2. datatype and variables
3. inpout/output structure
4. reference variable 
5. typecasting

*/


/*Algorithm for basic calcultor

1. display the intruction to enter the numbers
2. take the input into variables
3. ask the initial char to user
4. take char input to the variable
5. do the mathematical operation
6. print the output
*/


# include <iostream>
# include <iomanip>
using namespace std;

int main(){

    int a;
    float b;
    char e;
    double calculate;

    

    cout <<"Enter the 1st number: "<< endl;
    cin >> a ;
    cout<<"Enter the 2nd number: " << endl;
    cin >> b ;
    cout << "Enter the one character: " << endl;
    cin >> e ;

    calculate = a + b;
    cout << "The sum of a and b is: " << calculate << endl;

    calculate = a - b;
    cout << "The substraction of a and b is: " << calculate << endl;

    calculate = a / b;
    cout << "The division of a and b is: " << int(calculate) << endl; //typecasted the double calcuate variable into int

    calculate = a * b;
    cout << "The multiplication of a and b is: " << setw(4) << calculate << endl; //setw() is a maniplator and i manipulate the space width of output

    cout << "The entered character is: " << e << endl;
    




    return 0;
}