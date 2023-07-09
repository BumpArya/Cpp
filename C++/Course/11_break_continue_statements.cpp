#include<iostream>
using namespace std;

int main(){

    // break 

    for (int i = 0; i < 40; i++)
    {
        if(i==2){
            break; //break the loop before this iteration
        }
        cout<<i<<endl;
    }

    // continue 
    
    for (int j = 0; j < 40; j++)
    {
        if(j==2){
            continue; //skips the given iteration and continues to next one 
        }
        cout<<j<<endl;
    }

    return 0;
}