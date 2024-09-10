#include<iostream>
using namespace std ;

class A{
    public:
    int x;
};

// Single inheritance
class B:public A{
    public:
    // constructor to initialize x
    B()
    {
        x=10;
    }
};

class C{
    public:
    int y;
    // constructor to intialize y
    C()
    {
        y=2;
    }
};

// Multiple Inheritance
class D:public B,public C{
    public:
    void sum()
    {
        cout<<"Sum= "<<x+y<<endl;
    }

};

int main() {
    D obj;
    obj.sum();
    return 0 ;
}