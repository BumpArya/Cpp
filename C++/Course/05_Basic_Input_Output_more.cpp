/*
Input stream
In the input stream, the direction of the flow of bytes occurs from the input device (for ex keyboard) to the main memory.

Output stream
In output stream, the direction of flow of bytes occurs from main memory to the output device (for ex-display)
*/

#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter Value of Num1 :\n";/*"<<" Insertion Operator*/
    cin>>num1;/*">>" Extraction Operator*/
    cout<<"Enter Value of Num2 :\n";/*"<<" Insertion Operator*/
    cin>>num2;/*">>" Extraction Operator*/
    cout<<"The Sum is : \n"<< num1+num2;
    return 0;
}