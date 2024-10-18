#include<iostream>
#include<sstream>
#include<string>
using namespace std;

//here the class is the template. 
//Consider it as a new datatype inside we can define anytype we want.

class Student {
    
    public:
    string name;
    int rollno;
    float grade;

};


//Here we are defining the funtion for printing the Student class

void print(Student a){

        cout<<a.name<<" "<<a.rollno<<" "<<a.grade<<endl;
}

/*
here we are defining the change fnction to see how values inside the main loop
are working when they called a funtion which takes the argument value and change it 
inside the function
*/

void change(Student a){

    a.name = "Hero";
    print(a);


}

/*
Here as we normally define int a, float a 
like that we are defining Student s1 and it is called as object.
*/

int main(){
    
    Student s1,s2;
    
    s1.name = "Donald";
    s1.rollno = 450;
    s1.grade = 9.8;
    
    s2.name = "Himanshu";
    s2.rollno = 100;
    s2.grade = 7.8;

    // To print we can make a funtion also which takes the class argument line s1,s2

    print(s1);
    print(s2);
    change(s1); //here the s1.name is changes in only function not in main s1. This is called, pass by value 
    print(s1);

    //this is our normal way to show output
    // cout<<s1.name<<" "<<s1.grade<<" "<<s1.rollno<<endl; 
    // cout<<s2.name<<" "<<s2.grade<<" "<<s2.rollno<<endl; 



    return 0;
}