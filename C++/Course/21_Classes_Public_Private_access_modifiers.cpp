/*
Classes and structures are somewhat the same

but the diffrences between classes and structures are

We cannot hide data in structures which means that everything is public and can be accessed easily 
Drawback of structures is that we cannot add functions in it.
Classes additional features such as methods and properties.
*/

/*
Classes
Classes are user-defined data-types and are a template for creating objects
Classes consist of variables and functions which are also called class members
*/

/*
Public Access Modifier in C++
All the variables and functions declared under public access modifier will be available for everyone
They can be accessed both inside and outside the class
Dot (.) operator is used in the program to access public data members directly.
*/

/*
Private Access Modifier in C++
All the variables and functions declared under a private access modifier can only be used inside the class
They are not permissible to be used by any object or function outside the class.
By default everything is private inside class
*/

#include<iostream>
using namespace std;

class employee{
    private:
        int a ,b ,c;
    public:
        int p ,q ,r;
        void setData(int a1 ,int b1 ,int c1); //Declaration 
        void getData(){

        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of p is "<<p<<endl;
        cout<<"The value of q is "<<q<<endl;
        cout<<"The value of r is "<<r<<endl;

        }       
};

void employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee harry;
    // harry.a = 134; -->This will throw error as a is private variable
    harry.p = 34;
    harry.q = 89; // using dot operator to access public variables
    harry.r = 67; 
    harry.setData(1,2,4);
    harry.getData();
    return 0;
    
}
