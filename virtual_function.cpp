// Runtime / Dynamic Polymorphism or Late Binding

#include<iostream>
using namespace std ;

class Demo{
    public:
    virtual void func()
    {
        cout<<"Base class function"<<endl;
    }
};

class inherited:public Demo{
    public:
    void func()
    {
        cout<<"Inherited class function"<<endl;
    }
};

int main() {
    // Base class pointer
    Demo* objptr;
    Demo obj;
    inherited obj1;
    // base class function will be called because base class object is assigned 
    objptr=&obj;
    objptr->func();
    // child class function will be called because child class object is assigned 
    objptr=&obj1;
    objptr->func();
    return 0 ;
}