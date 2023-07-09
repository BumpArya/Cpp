#include<iostream> 
// header file - increase the functionality of program
// iostream help in input output 
// blank lines dont matter cpp ignores them 

int main(){ 
//"int" is a return type which is called integer
//"main()" is a function, the brackets "()" denotes that it is a function. 
//The curly brace "{" indicates that it is an opening of a function, and the curly brace "}" indicates that it is the closing of a function.
    
    // instructions are written inside function
    // we end each statement of instruction with semi colon  
    // you can continue writing new statement after semi colon 

    std::cout<<"Hello World";
    //"std" is a namespace, "::" is the scope resolution operator
    //"cout<<" is a function which is used to store output data
    //The code "std::cout" tells the compiler that the "cout" identifier resides in the std namespace.
    
    return 0;
    //return keyword will return 0 as an integer to our main function "int main()"
    //Returning 0 as a value to the main function means successful termination of the program.
}
