//================ Characteristics of the constructor =====================================================================
// Constructor has the same name as the class itself.
// Constructors don’t have a return type.
// A constructor is automatically called when an object is created.
// It must be placed in the public section of class.
// If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).
// Constructors can be overloaded.
// Constructor cannot be declared virtual.
//========================================================================================================================= 


#include<iostream>
using namespace std ;

class Person{
    // access specifier
    public:
    
    //data member
    string name;
    int age;
    string gender;

    // Default Constructor
    Person(){
        // cout<<"Default Constructor"<<endl;
        name="Himanshi";
        age=20;
        gender="Female";
    }

    // Parameterized Constructor
    Person(string n, int a, string g)
    {
        name=n;
        age=a;
        gender=g;
    }

    // Copy Constructor
    Person(Person &p)
    {
        name=p.name;
        age=p.age;
        gender=p.gender;
    }

    // member function
    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};

int main() {
    
    // Object instantiation
    Person obj;
    Person obj1("Pratik",25,"Male");
    Person obj2(obj1);

    // calling member function through objects
    obj.print();
    obj1.print();
    obj2.print();
    return 0 ;
}