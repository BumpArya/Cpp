#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    // Constants in C++

    const int a = 3;
    cout<<"The value of a was: "<<a<<endl;

    // a = 45; // You will get an error because a is a constant
    cout<<"The value of a is: "<<a<<endl;   

    // Manipulators in C++
    // Manipulators help in formattig data display ex-endl

    int x =3, y=78, z=1233;

    cout<<"The value of x without setw is: "<<x<<endl;
    cout<<"The value of y without setw is: "<<y<<endl;
    cout<<"The value of z without setw is: "<<z<<endl;

    cout<<"The value of x is: "<<setw(4)<<x<<endl;
    cout<<"The value of y is: "<<setw(4)<<y<<endl;
    cout<<"The value of z is: "<<setw(4)<<z<<endl;

    // Operator Precedence
    // its a form of BODMAS rule for cpp 
    // When Operator Precedency is same we see associativity 

    int p =3, q=4;
    int r = ((((p*5)+q)-45)+87);
    cout<<r;

    return 0;

}