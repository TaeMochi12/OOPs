#include<iostream>
using namespace std ;

class A{
    public:
    void func()
    {
        cout<<"Class A"<<endl;
    }
};

class B{
    public:
    void func()
    {
        cout<<"Class B"<<endl;
    }
};

// Class C inherited from A and B
class C: public A, public B{
    public:
    void func()
    {
        cout<<"Class C inherited from A and B"<<endl;
    }
};

int main() {
    C obj;
    obj.A::func();  //resolving ambiguity
    obj.B::func();

    obj.func();
    return 0 ;
}