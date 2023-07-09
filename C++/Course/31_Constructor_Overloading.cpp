#include<iostream>
using namespace std;

class Complex{
    int r,i;
    public:
    Complex(){ 
        r = 0;
        i = 0;
    }
    Complex(int x){ // Constructor Overloading
        r = x;
        i = 0;
    }
    Complex(int x,int y){ // Constructor Overloading 
        r = x;
        i = y;
    }
    void DisComplexNum(){
        cout << r <<" + "<< i << "i" << endl;
    }
};

int main(){

    Complex c1 = Complex(2,1);
    c1.DisComplexNum();

    Complex c2 = Complex(2);
    c2.DisComplexNum();

    Complex c3 = Complex();
    c3.DisComplexNum();
    
    return 0;
}