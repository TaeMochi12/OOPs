//================================= Characteristics of the constructor ====================================================================================
// Destructor is invoked automatically by the compiler when its corresponding constructor goes out of scope and releases the memory space that is no longer required by the program.
// Destructor neither requires any argument nor returns any value therefore it cannot be overloaded.
// Destructor cannot be declared as static and const.
// Destructor should be declared in the public section of the program.
//==========================================================================================================================================================

#include<iostream>
using namespace std ;

class Demo{

public:
Demo()
{
    cout<<"Hello, I'm a constructor"<<endl;
}

~Demo()
{
    cout<<"Bye, I've destructed you"<<endl;
}

};

int main() {
    
    Demo obj;

    return 0 ;
}