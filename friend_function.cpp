#include<iostream>
using namespace std ;

class Demo{
    private:
    int a;
    
    protected:
    int b;

    public:
    Demo(int x,int y)
    {
        a=x;
        b=y;
    }

    friend void func(Demo& obj); // friend function declaration
};

void func(Demo& obj)
{
    cout<<"Private data member:"<<obj.a<<endl;
    cout<<"Protected data member:"<<obj.b<<endl;
}

int main() {
    Demo obj(12,18);
    func(obj);
    return 0 ;
}