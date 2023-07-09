#include<iostream>
using namespace std;

class C {
    
    int i1,i2,i3;
    
    public:

    C(int v1,int v2,int v3);
    C(int v1,float v2,float v3);

    void display(){
        cout << "Data values in C " << i1 << ", " << i2 << ", " << i3 << endl;
    }
};

C::C(int v1, int v2, int v3){
    i1 = v1;
    i2 = v2;
    i3 = v3;
}

C::C(int v1, float v2, float v3){
    i1 = v1;
    i2 = (int)v2;
    i3 = (int)v3;
}

int main()
{
    C c1(1,2,3);
    c1.display();

    C c2(1,2.2f,3.3f);
    c2.display();

    return 0;
}

/*
Note
In C++ the type of decimal literals like 1.11 is defined to be double. 
Given that it has to convert the double to either int or float which results in the ambiguity.
A literal with an f suffix like 1.11f would have type float.
*/