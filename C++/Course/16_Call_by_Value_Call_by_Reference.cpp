#include<iostream>
using namespace std;

int sum(int a , int b){
    int c = a + b;
    return c;
}

//This is will not swap 
/* 
analogy - if you share a song with your friend through bluetooth and he trims the song to 
some length it wont alter the song present on your phone 

here the main function is your phone and x & y are song on your phone  
whereas void swap is his phone and x & y are songs you gave him which 
became a & b after you sent them to be trimmed 
*/ 

void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

//Call by reference using pointers

void swapPointer(int* a,int*  b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Call by reference using CPP reference variables 

void swapReferenceVar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}   

int main(){
    cout<<"The Sum of 4 and 5 is "<<sum(4,5)<<endl;    
    int x = 4, y =5; 
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    swap(x,y); //dosent work
    swapPointer(&x,&y); //works
    swapReferenceVar(x,y); //works 
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    return 0;
}



