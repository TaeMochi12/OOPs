#include<iostream>
using namespace std ;

class Person{
    // access specifier
    public:
    
    //data member
    string name;

    // member function
    void print()
    {
        cout<<"Person's name is : "<<name<<endl;
    }
};

int main() {
    
    // Object instantiation
    Person obj;

    // Accessing data member through object
    obj.name="Himanshi";

    // calling member function through object
    obj.print();
    return 0 ;
}