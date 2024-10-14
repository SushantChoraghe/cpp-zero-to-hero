/*
here we are going to learn 

2. if else structure
3. included own created header file maned as main.hpp
4. previous learning
*/


# include "main.hpp"

int main(){

    int age;

    cout<<"Enter your completed age"<<endl;
    cin>>age;

    //ladder if-else statements

    if((age<18) && (age>0)){
        cout<<"You are not allwed to enter the party"<<endl;
    }

    else if(age==18){
        cout<<"You are allowed but bring your ID card"<<endl;
    }

    else if(age<1){
        cout<<"Invalid age and not come to my party also"<<endl;
    }

    else{
        cout<<"Enjoy the party"<<endl;
    }

    return 0;
}