// for more check notebook

#include<iostream>
using namespace std;

// Return By Reference Variable

int & swapReferenceVarReturn(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}   

int main(){  
    int x = 4, y =5; 
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    swapReferenceVarReturn(x,y)=766;  
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    return 0;
}
