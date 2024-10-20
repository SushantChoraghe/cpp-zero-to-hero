# include <iostream>
# include <string>
using namespace std;

class Cricketer {
     public: 

        string name;
        int runs;

        /*
        when we are runnig the following constructor it will give us garbage value like following
        Cricketer Name is  and his runs are 0
        Criketer Name is  and his runs are 6290976  

        lets understand it why:

        now our object is calling constructor having 2 parameters.
        The constructor creates new two blocks name as  name and runs
        but here is the catch, we have already datatype named as name and runs.

        since we have name and runs in constructor, so our program returns the values
        in the the same local parameters of constructor instead of object parameters 
        which are name and runs.

        and since our object values are empty name and empty runs it gives garbage value.

        ie int x = 4;
            int x = x;


        */
    //    Cricketer( string name, int runs){
    //          name = name;
    // //          runs = runs;
    //     }


        // to avoid this situation we use this-> oprator so notate the object parameters
    
    
       Cricketer( string name, int runs){
            this-> name = name;
            this-> runs = runs;
        }
 };


void print (Cricketer a){

    cout<<"Cricketer Name is "<<a.name<<" and his runs are "<<a.runs<<endl;

}




int main (){

    Cricketer c1 ("Virat Kohli", 25000);    
    Cricketer c2 ("Rohit Sharma", 25000);    

    print(c1);
    print(c2);


    return 0;
}