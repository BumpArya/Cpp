/*
    Int-> Int is used to store integer data e.g (-1, 2, 5,-9, 3, 100).
    Float-> Float is used to store decimal numbers e.g (0.5, 1.05, 3.5, 10.5)
    Char-> Char is used to store a single character e.g. ('a', 'b',' c', 'd')
    Boolean-> Boolean is used to store "true" or "false." 
    Double-> Double is also used to store decimal numbers but has more precision than float, 
    e.g. (10.5895758440339...)

Syntax for Declaring Variables in C++
Data_type Variable_name = Value;
*/

/*
Base on scope, variables can be classified into two types:
    Local variables - Local variables are declared inside the braces of any function and can be assessed only from there.
    Global variables - Global variables are declared outside any function and can be accessed from anywhere.
    
    Can Local and Global Variable have same name - yes local var has precedence over global var
*/

// Data types define the type of data that a variable can hold; for example, an integer variable can

/*
Data types in C++ are categorized into three groups:
    Built-in
    User-defined
    Derived

Built-in Data Types in C++:
    * Int
    * Float
    * Char
    * Double
    * Boolean 

User-Defined Data Types in C++:
    * Struct
    * Union
    * Enum

Derived Data Types in C++:
    * Array
    * Pointer
    * Function
*/

# include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a; 
    cout<< glo;
    }

int main(){
    int glo=9;
    glo=78;
    // int a = 14;
    // int b = 15;
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = false;
    sum();
    cout<<glo<< is_true;
    // cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<< b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}

