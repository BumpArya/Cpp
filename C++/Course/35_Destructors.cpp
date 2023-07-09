/*
A destructor is a type of function which is called when the object is destroyed. 
Destructor never takes an argument nor does it return any value.
*/

#include<iostream>
using namespace std;

class Demo{

    public:

    Demo(){
        cout<<"Constructor invoked"<<endl;
    }

    ~Demo(){ // Destructor 
        cout<<"Destructor invoked"<<endl;
    }
};

int main()
{
    cout<<"Entering Block 1"<<endl;
    Demo D1;
    {
        cout<<"Entering Block 2"<<endl;
        Demo D2;
        cout<<"Exiting Block 2"<<endl;
    }
    Demo D3;
    cout<<"Exiting Block 1"<<endl;

    return 0;
}

/*
Destructor is usually called when compund instruction inside punctuation {} braces is executed 
*/