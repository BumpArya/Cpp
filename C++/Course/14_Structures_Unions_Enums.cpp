// for more check notebook

#include<iostream>
using namespace std;

// creating structure employee 

typedef struct employee
{        
    int eid; 
    char favChar;
    float salary;
}ep; //using type def i can use just ep instead of struct employee everytime 

// creating union Money - shares memory among var , can use only one var at a time 

typedef union Money 
{
    int rice;
    char car;
    float pounds;
}Mo; 

int main(){

    struct employee arya;
    arya.eid = 15;
    arya.favChar = 'c';
    arya.salary = 1.2e+011;

    ep shubham;
    shubham.salary = 200;

    cout<<arya.salary<<endl;
    cout<<shubham.salary<<endl;

    union Money krishna;
    krishna.rice = 34;
    // krishna.car = 'm'; // you must use single var at a time in union or else it provides garbage value

    Mo Omkar;
    Omkar.pounds = 100.99;

    cout<<krishna.rice<<endl;
    cout<<Omkar.pounds<<endl;

    //enum numbers the var present in data type 

    enum Meal {Breakfast ,Lunch ,Dinner};
    cout<<Breakfast<<endl;
    cout<<Lunch<<endl;
    cout<<Dinner<<endl;
    
    Meal m1 = Lunch;
    cout<<m1;

    return 0;
}















