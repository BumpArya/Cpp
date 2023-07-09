// for more check notebook

#include<iostream>
using namespace std;

int main(){

    // Creating an array 

    int marks[4]={23,45,67,89}; // creating an array method 1 
    cout<<"These are marks"<<endl;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl; 
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    marks[1] = 54; // you can change values of array 
    cout<<marks[1]<<endl;

    int mathMarks[4]; // creating an array method 2
    mathMarks[0]=23;
    mathMarks[1]=45; 
    mathMarks[2]=67;
    mathMarks[3]=89;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // printing array using loops 

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks at "<<i<<" is "<<marks[i]<<endl;
    }
    
    // Pointers and arrays 

    int* p = marks;
    cout<<"The value at *p     i.e. marks[0] is "<<*p<<endl;
    cout<<"The value at *(p+1) i.e. marks[1] is "<<*(p+1)<<endl;
    cout<<"The value at *(p+2) i.e. marks[2] is "<<*(p+2)<<endl;
    cout<<"The value at *(p+3) i.e. marks[3] is "<<*(p+3)<<endl;
    
    cout<<*(p++)<<endl; //Will print value at p and then increment p
    cout<<*(p--)<<endl; //Will print value at p and then decrement p
    //same for other following operators

    return 0;
}