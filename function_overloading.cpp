// Compile time polymorphism

#include<iostream>
using namespace std ;

class Demo{
    public:
    void func()
    {
        cout<<"function with no args"<<endl;
    }
    void func(int x)
    {
        cout<<"function with integer args"<<endl;
    }
    void func(double x)
    {
        cout<<"function with double args"<<endl;
    }
};

int main() {
    Demo obj;
    obj.func();
    obj.func(12);
    obj.func(12.18);
    return 0 ;
}