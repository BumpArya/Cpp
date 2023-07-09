/*
A constructor is a special member function with the same name as the class

Important Characteristics of Constructors in C++ 

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types (not even void)
It can have default arguments
We cannot refer to their address
*/

#include<iostream>
using namespace std;

class Complex {
    int a, b;

    public:
    Complex(void); // Constructor declaration

    void printNumber(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(){ // This is a default constructor 
    a = 10;
    b = 0;
}

int main(){
    Complex c1,c2;
    c1.printNumber();
    c2.printNumber();
    return 0;
}