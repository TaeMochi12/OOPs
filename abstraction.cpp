#include<iostream>
using namespace std ;

class Demo{
    private:
    int a,b;

    public:
    // method to set values of private members
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

int main() {
    Demo obj;
    obj.set(12,18);
    obj.display();
    return 0 ;
}