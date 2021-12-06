#include <iostream> //this is run time polymorphism
using namespace std; 
class Animal { 
    public: 
        void function(){ 
        cout<<"Eating..."<<endl; 
    } 
}; 
class Man: public Animal 
{ 
    public: 
    void function() //this function is overwriting the function that is set in the animal class
        { 
            cout<<"Walking ..."<<endl; 
        } 
}; 
int main(void) { 
    Animal A =Animal();
    A.function(); //parent class object 
    Man m = Man(); 
    m.function(); // child class object
    return 0; 
}
//Function overriding: In function overriding, we give the new definition to base class function in the derived class. 
//In function overriding, we have two definitions of the same function, one in the superclass and one in the derived class.