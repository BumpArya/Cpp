/*
When a function calls itself it is called recursion 
The function which is calling itself is called a recursive function.
*/

#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

/*
Step by step calculation of factorial(4)
factorial(4) = 4 * factorial(3); 
factorial(4) = 4 * 3 * factorial(2);
factorial(4) = 4 * 3 * 2 * factorial(1);
factorial(4) = 4 * 3 * 2 * 1;
factorial(4) = 24;
*/

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;
    int b;
    cout<<"Enter a number"<<endl;
    cin>>b;
    cout<<"The term in fibonacci sequence at position "<<b<< " is "<<fib(b)<<endl;
    return 0;

}