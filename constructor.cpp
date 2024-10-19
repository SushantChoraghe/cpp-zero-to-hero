#include<iostream>
#include<sstream>
#include<string>
using namespace std;


/*types of constructors

1. default constructor
2. parametrised constructor
3. copy constructor

lets learn one by one about each constructor
*/



class Student {
    
    public:
    string name;
    int rollno;
    float grade;


    Student(string s, int r, float g){
        name = s;
        rollno = r;
        grade = g;
    }
};



void print(Student a){

        cout<<a.name<<" "<<a.rollno<<" "<<a.grade<<endl;
}



void change(Student a){

    a.name = "Hero";
    print(a);


}


int main(){
    
    // Student s1,s2;
    Student s1("Himanshu", 98, 9.2);
    
    // s1.name = "Donald";
    // s1.rollno = 450;
    // s1.grade = 9.8;
    
    // s2.name = "Himanshu";
    // s2.rollno = 100;
    // s2.grade = 7.8;

    // To print we can make a funtion also which takes the class argument line s1,s2

    print(s1);
    // print(s2);
    change(s1); //here the s1.name is changes in only function not in main s1. This is called, pass by value 
    print(s1);

    //this is our normal way to show output
    // cout<<s1.name<<" "<<s1.grade<<" "<<s1.rollno<<endl; 
    // cout<<s2.name<<" "<<s2.grade<<" "<<s2.rollno<<endl; 



    return 0;
}