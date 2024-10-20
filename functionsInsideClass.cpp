//problem statement: print all the details of a given object


# include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;


    Cricketer(string name, float avg, int runs ){
        this->name = name;
        this->avg = avg; 
        this->runs = runs;
    }

    // we can also make the same print function inside the class
    // 1. first method by passing the parameters
    // void print(Cricketer x){
    //     cout<<x.name<<" and "<<x.runs;
    // }

    // //2. without passing the parameters
    // void print(){
    //     cout<<this->name<<" and "<< this->runs<< " and "<<this->avg<<endl;
    // }

    //3. using this statement and without passing the parameters
     // 3.1 it gives same output but it is used for best practice.
    void print(){
        cout<<this->name<<" and "<< this->runs<< " and "<<this->avg<<endl;
    }

    //3.2 what if in fuure we neet to pass the other parameters like int a into print function

    // void print(int a){
    //     cout<<this->name<<" and "<< this->runs<< " and "<<this->avg<<endl;
    //     cout<<a<<endl;

    // }


    int matches(){
        return runs/avg;        
    }



};


// //this is normal function which we use to print the ouptput
// void print(Cricketer x){
//     cout<<x.name<<" and "<<x.runs;
// }


int main(){

    //this is example of 1, 2 and 3
    Cricketer c1("Virat Kohli", 78, 25000 );
    Cricketer c2("Rohit Sharma", 100, 18000 );
    //print(c1); //this is nomally we use function which is out of class

    //now below the output is for the function which is build inside the class
    // c1.print();
    // also we can modify any thing ex:
    // c1.name = "sachin";
    // c1.print();


    // thisis example 3.2
    
    // c1.print(5);

    //made int functions
    c1.print();
    c2.print();
    c1.matches();
    c2.matches();
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;




    return 0;
}