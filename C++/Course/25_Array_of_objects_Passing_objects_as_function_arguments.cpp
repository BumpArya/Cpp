/*
An array of Objects in C++

An array of objects consists of class objects as its elements.
If the array consists of class objects it is called an array of objects
*/

#include<iostream>
using namespace std;

class Employee{

    int id;
    int salary;

    public:
        
        void setId(void)
    {
        cout << "Enter the id of employee" << endl;
        cin >> id;
        cout << "Enter the salary of employee" << endl;
        cin >> salary;    
    }
        
        void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
        cout << "The salary of this employee is " << salary << endl;
    }

};

/*
Passing Object as Function Argument

Objects can be passed as function arguments
This is useful when we want to assign the values of a passed object to the current object
*/

class complex{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(complex o1, complex o2){ // using objects as function arguments
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{   
    int j;
    cout<<"Enter the number of employees"<<endl;
    cin>>j;

    Employee fb[j]; // declare an array fb of j objects 
    for (int i = 0; i < j; i++) // using for loop to iterate over array fb
    {
        fb[i].setId();
        fb[i].getId();
    }

    complex c1, c2, c3;

    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}



