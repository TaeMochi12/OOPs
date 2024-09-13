#include<iostream>
using namespace std ;

class Demo{
    public:
    int a;
    Demo()
    {
        a=12;
    }
    friend class Demo_friend;  // friend class
};

class Demo_friend{
    public:
    void display(Demo &t)
    {
        cout<<"The value of demo variable:"<<t.a<<endl;
    }
};

int main() {
    Demo obj;
    Demo_friend obj1;
    obj1.display(obj);
    return 0 ;
}