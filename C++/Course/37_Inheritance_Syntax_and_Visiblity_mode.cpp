/*
Inheritance is a process of inheriting attributes of the base class by a derived class

Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited
*/

#include<iostream>
using namespace std;

class base{

    public:
    
    int publicData = 0;

    void methodBase(){
        cout<<"This is a method of base class"<<endl;
    }
};

class derived : public base { // Inheritance Syntax -> class derived_class_name : visiblity_mode base_class_name

    public:

    void methodDerived(){
        cout<<"This is a method of derived class"<<endl;
    }
};

int main()
{
    derived D;

    D.methodBase();
    D.methodDerived();

    cout<<"Public data of class base accessed from derived class "<<D.publicData<<endl;

    return 0;
}