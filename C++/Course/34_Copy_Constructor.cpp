/*
A copy constructor is a type of constructor that creates a copy of another object.
If no copy constructor is written in the program compiler will supply its own copy constructor
*/

#include<iostream>
using namespace std;

class Demo{
    int i;

    public:

    Demo(int v){
        i = v;
    }

    Demo(Demo &obj){ // Copy Constructor
        cout<<"Creating copy of the object"<<endl;
        i = obj.i;
    }

    void display(){
        cout << "Value of i is "<< i << endl;
    }
};

class Demo2{
    int i1;

    public:

    Demo2(int v1){
        i1 = v1;
    }

    void display2(){
        cout << "Value of i1 is "<< i1 << endl;
    }
};

int main()
{   
    Demo D0(1);
    D0.display();

    Demo D1(D0);
    D1.display();

    Demo2 D2(2); // Default copy constructor is called
    D2.display2();

    Demo2 D3(D2); 
    D3.display2();

    // alternatively can be written as 
    /*
    Demo2 D3 = D2; 
    D3.display2();
    */

    return 0;
}