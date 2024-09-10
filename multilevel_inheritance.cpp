#include<iostream>
using namespace std ;

class A{
    public:
    void funcA()
    {
        cout<<"Class A"<<endl;
    }
};

// inherited from A
class B:public A{
    public:
    void funcB()
    {
        cout<<"Class B inherited from A"<<endl;
    }
};

// inherited from B
class C:public B{
    public:
    void funcC()
    {
        cout<<"Class C inherited from B"<<endl;
    }
};

int main() {
    C obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();   
    return 0 ;
}