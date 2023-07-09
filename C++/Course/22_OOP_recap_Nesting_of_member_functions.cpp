// for more check notebook

#include <iostream>
#include <string>
using namespace std;

// OOPs - Classes and objects

// In C++ objects can be declared along with class deceleration
class Employee
{
    // Class definition
} harry, rohan, lovish;

/*
Nesting of a member function.

If one member function is called inside the other member function of the same class
it is called nesting of a member function.
*/

class binary
{
private:
    string s;
    void chk_bin(); //Check if binary

public:
    void read(); //Input the binary number 
    void ones(); //Ones Complement
    void display(); //Display the binary number 
};

void binary :: read(){
    cout<<"Enter a binary number : ";
    cin>>s;
}

void binary::chk_bin(void)
{   
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            break;
        }
    }
}

void binary :: ones(){
    chk_bin(); //Here member function is nested inside other member function 
    for (int i = 0; i < s.length(); i++)
    {
        switch (s.at(i))
        {
        case '0':
            s.at(i) = '1';
            break;
        
        case '1':
            s.at(i) = '0';
            break;
        
        default:
            exit(0); //Entire program terminates and nothing is executed after this point 
            break;
        }
    }
    
}

void binary :: display()
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin(); //Cant use it outside the class & class members since its a private member
    b.ones();
    b.display();
}