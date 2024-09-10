// Runtime Polymorphism

#include<iostream>
using namespace std ;

class A{
    public:
    void func()
    {
        cout<<"Base Class";
    }
};

class B:public A{
    public:
    // func() function overrrided
    void func()
    {
        cout<<"Child class"<<endl;
    }
};

int main() {
    B obj;
    obj.func();
    return 0 ;
}