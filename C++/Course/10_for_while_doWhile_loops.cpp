#include<iostream>
using namespace std;

/*
3 types of loops :

1.for
2.while 
3.do While 
*/

int main(){

    // for loop in CPP 

    /*
    Syntax for for loop
    for(initialization; condition; updation)
    {
        loop body(C++ code);
    }
    */

    for (int i = 0; i <= 10; i++)
    {
        cout<<i<<endl;
    }
    
    // While loop in CPP

    /*
    Syntax:
    while(condition)
    {
        C++ statements;
    }
    */

    int j = 1;
    while(j<=10){
        cout<<j<<endl;
        j++;
    }
    
    // do While loop in CPP

    /*
    Syntax:
    do
    {
        C++ statements;
    }while(condition);
    */
    
    int k=2;
    do
    {
        cout<<k<<endl;
        k++;
    } while (k<=10);
    

    // diffrence between while and do while loop is loop will be executed atleast once before checking the condition in do while 
    // to create infinite loop simply use condition that is always true 

    // printing table of 6 using do while loop 

    int l = 1;
    cout<<"Table of 6 using do while loop"<<endl;
    do
    {
        cout<<6<<" x "<<l<<" = "<<6*l<<endl;
        l++;
    } while (l<=10);

    return 0;
    
}


