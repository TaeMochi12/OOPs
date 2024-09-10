#include<iostream>
using namespace std ;

class A{
    public:
    void funcA()
    {
        cout<<"Class A"<<endl;
    }
};

// Inherited from A
class B:public A{
    public:
    void funcB()
    {
        cout<<"Class B inherited from A"<<endl;
    }
};

// Inherited from A
class C:public A{
    public:
    void funcC()
    {
        cout<<"Class C inherited from A"<<endl;
    }
};

int main() {
    B obj;
    obj.funcA();
    obj.funcB();

    C obj1;
    obj1.funcA();
    obj1.funcC();
    return 0 ;
}