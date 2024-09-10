#include<iostream>
using namespace std ;

class Demo{
    public:
    // data hidden from outside world
    int x;
    // function for setting value of x
    void set(int a)
    {
        x=a;
    }
    // function for getting value of x
    void get()
    {
        cout<<"The value is: "<<x<<endl;
    }
};

int main() {
    Demo obj;
    obj.set(12);
    obj.get();
    return 0 ;
}