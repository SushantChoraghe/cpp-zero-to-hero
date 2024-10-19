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

    //paramatric constructor
    /*
    Use this parametric constructor with following syntex--> dont change the entry parameter
    sequence in syntex and maintain same as mentioned in main.
    */
    Student(string s, int r, float g){ 
        name = s;
        rollno = r;
        grade = g;
    }

    Student(int r, float g, string s){ 
        rollno = r;
        grade = g;
        name = s;

    }

    //default constructor
    /*
    this is default constructor when we are using objects directly by mentioning 
    in main file as Student s1,s2,s3 ete
    */

    Student(){ // this is default constructor

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
    

    //this is parametric constructor 

    Student s1("Himanshu", 98, 9.2);
    Student s2(100,1.8,"Amit");
    


    //this is default constructor

    Student s3;

    s3.name = "Donald";
    s3.rollno = 450;
    s3.grade = 9.8;
    
    // s2.name = "Himanshu";
    // s2.rollno = 100;
    // s2.grade = 7.8;


    //this is copy constructor
    /* 
    This constrctor copies the items  from s1 constructor and it is a deep copy.
    Also we can modify the value in new object but it changes in new object not in old one
    from where you are copying.
    */
    //Student s4 = s1;
    // s4.name = "Abhilash";

    // also we can do copy constructor like this

    Student s4(s1);
    s4.name = "nandu";


    // To print we can make a funtion also which takes the class argument line s1,s2

    print(s1);
    print(s2);
    print(s3);
    print(s4);
    


    //change(s1); //here the s1.name is changes in only function not in main s1. This is called, pass by value 
    
    //print(s1);

    
    
    
    //this is our normal way to show output
    // cout<<s1.name<<" "<<s1.grade<<" "<<s1.rollno<<endl; 
    // cout<<s2.name<<" "<<s2.grade<<" "<<s2.rollno<<endl; 



    return 0;
}