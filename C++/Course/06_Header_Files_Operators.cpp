/*
There are two types of header files:

    System Header Files
    System header files ships with the compiler. For example, “#include <iostream>”. 
    To see the references for header files click here

    User-Defined Header Files
    The programmer writes User-defined header files himself. 
    To include your header file in the program, you first need to make a header file in the current directory, and then you can add it.
*/

#include<iostream>  // Pressing (ctrl+click) on Header File takes you to the Header Filec
using namespace std;
int main(){ 
    int a, b;
    cout<<"Operators in C++:"<<endl;
    cout<<"Enter Value of a : ";cin>>a;
    cout<<"Enter Value of b : ";cin>>b;
    cout<<"Following are the types of operators in C++"<<endl;
    
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++   is "<<a++<<endl;//Succession by 1 (First Print Then Increment)
    cout<<"The value of a--   is "<<a--<<endl;//Predecession by 1 (First Print Then Decrement)
    cout<<"The value of ++a   is "<<++a<<endl;//Succession by 1 (First Increment Then Print )
    cout<<"The value of --a   is "<<--a<<endl;//Predecession by 1 (First Decrement Then Print)
    cout<<endl;
    

    /*
    Assignment Operators --> used to assign values to variables
    int a =3, b=9;
    char d='d';
    */

    // Comparison operators - gives output in 0 or 1 (Boolean values)
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"is a == b is "<<(a==b)<<endl;
    cout<<"is a != b is "<<(a!=b)<<endl;
    cout<<"is a >= b is "<<(a>=b)<<endl;
    cout<<"is a <= b is "<<(a<=b)<<endl;
    cout<<"is a >  b is "<<(a> b)<<endl;
    cout<<"is a <  b is "<<(a< b)<<endl; 

    // Logical operators - gives output in 0 or 1 (Boolean values)
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of logical or  operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of logical not operator (!(a==b))         is:"<<(!(a==b))        <<endl; 

    return 0;

}

