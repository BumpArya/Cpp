#include<iostream>
using namespace std;

/*
Inline Functions 
Inline functions are used to reduce the function call. 
When one function is being called multiply times in the program it increases the execution time, 
so inline function is used to reduce time and increase program efficiency
*/

inline int product(int a, int b){
    // Static variables 
    // static int c=0; //This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}

/*
Inline functions are considered to be used when the function is small otherwise it will not perform well. 
- it will use up a lot of memory in cache
Inline is not recommended for recursion
Inline is not recommended when static variables are being used in the function
*/

/*
Inline functions are request to compiler 
it can choose to make function inline or not 
*/

// static int c=0; // Static variables - This executes only once
// c = c + 1; // Next time this function is run, the value of c will be retained

/*
Default arguments 
Default arguments are those values which are used by the function 
if we don’t input our value
*/
/*
Default arguments must remain to the extreme right 
while compulsary arguments to the left
*/
float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

/*
Constant arguments
Constant arguments are used when you don’t want your values to be changed or modified by the function.
*/
/*
Important for reference variable and Pointers
*/
int strlen(const char *p){

}


int main(){
    int a,b;
    cout<<"Enter value of a and b : "<<endl;
    cin>>a>>b;
    cout<<"Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"Product of a and b is : "<<product(a,b)<<endl;
    // cout<<"Product of a and b is : "<<product(a,b)<<endl;

    int money ;
    cout<<"Enter amount of money : "<<endl;
    cin>>money;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year"<<endl;
    return 0;
}

