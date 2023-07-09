// for more check notebook

#include<iostream>
using namespace std;

/* Function prototype
Syntax - type function-name (arguments);*/

int sum(int a , int b); // asks compiler to search for following function even if not mentioned earlier 
// int sum(int a, b); //--> Not Acceptable
int sum(int, int);   //--> Acceptable 

void g();

/*Functions*/

int main(){
    int num1 , num2;
    cout<<"Enter num 1 : "<<endl;
    cin>>num1;
    cout<<"Enter num 2 : "<<endl;
    cin>>num2;
    cout<<"The Sum is  : "<<endl;
    // num1 and num2 are actual parameters
    cout<<sum(num1 , num2); //known as return value function key 
    g();
    return 0;
}

// a and b are formal parameters
int sum(int a , int b){
    int c = a + b;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}