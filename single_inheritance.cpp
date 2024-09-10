#include<iostream>
using namespace std ;

class A{
    public:
    void funcA()
    {
        cout<<"Base Class"<<endl;
    }
};

// Class B inherited from class A
class B : public A{

    public:
    funcB(){
        cout<<"Inherited Class"<<endl;
    }
};

int main() {
    B obj;
    // Function of class A called using object of class B
    obj.funcA();
    // Function of class B called using object of class B
    obj.funcB();

    return 0 ;
}