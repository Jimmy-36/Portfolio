#include<iostream> //11/08/2021 this program is a virtual function
using namespace std;

class Add
{ 
public: 
    virtual void print () //this function is virtual because it will be overwritten by the Sub class
    { int a=20, b=30;
    cout<< " base class Action is:"<<a+b <<endl;
    } 
    void show () 
    { cout<< "show base class" <<endl; } 
}; 
class Sub: public Add 
{ 
public: 
    void print () //print () is already virtual function in derived class, we could also declare as virtual void print () explicitly 
    { int x=20,y=10;
    cout<< " derived class Action:"<<x-y <<endl; } 
    void show () 
    { cout<< "show derived class" <<endl; } 
}; 
//main function 
int main() 
{ 
    Add *aptr; 
    Sub s; 
    aptr = &s; 
    //virtual function, binded at runtime (Runtime polymorphism) 
    aptr->print(); 
    // Non-virtual function, binded at compile time 
    aptr->show(); 
    return 0; 
}
//Virtual Function: A virtual function is declared by keyword virtual. The return type of virtual function may be int, float, void.
//The declaration of the virtual function must be in the base class by using the keyword virtual. 