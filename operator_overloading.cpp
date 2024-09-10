// Compile time polymorphism

#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imag;
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void display()
    {
        cout << real << " + i" << imag << endl;
    }
};

int main()
{
    Complex obj1(2, 3);
    Complex obj2(4, 8);
    Complex obj3 = obj1 + obj2;
    obj3.display(); 
    return 0;
}