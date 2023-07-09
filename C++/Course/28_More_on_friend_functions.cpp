// EXAMPLE 1 - Function to add values of a object in classes X and Y

#include<iostream>
using namespace std;

class Y; // forward declaration

class X{
    int dataX;
    friend void add(X, Y); 
    public:
    void setValue(int value){
        dataX = value;
    }
};

class Y{
    int dataY;
    public:
    void setValue(int value){
        dataY = value;
    }
    friend void add(X, Y);
};

void add(X o1 , Y o2){
    cout<<"Summing data of X and Y gives me "<< o1.dataX + o2.dataY;
}

// Driver Program 

// int main(){

//     X a;
//     a.setValue(3);

//     Y b;
//     b.setValue(5);

//     add(a,b);

//     return 0;
// }

// EXAMPLE 2 - Function that will swap private data of class c1 and c2 

#include<iostream>
using namespace std;

class c2;

class c1{
    int val1;
    friend void exchange(c1 & , c2 &);
    public:
        void indata(int a){
            val1 = a;
        }

        void display(void){
            cout<< val1 <<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
        void indata(int b){
            val2 = b;
        }

        void display(void){
            cout<< val2 <<endl;
        }
};

void exchange(c1 &x, c2 &y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
};

int main(){

    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);

    cout<<"The value of c1 after exchanging becomes: ";
    oc1.display();
    cout<<"The value of c2 after exchanging becomes: ";
    oc2.display();
    
    return 0;
}