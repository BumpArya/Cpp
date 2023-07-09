#include<iostream>
using namespace std;

class Simple{
    int s1,s2;
    public:
    Simple(int x,int y = 1){ // Default arguments
        s1 = x;
        s2 = y;
    }
    void printS();
};

void Simple :: printS(){
    cout<<"The value of data in simple is "<< s1 <<", "<< s2 <<" and "<<endl;
}

int main()
{

    Simple s0 = Simple(1,4);
    s0.printS();

    Simple s1 = Simple(1);
    s1.printS();

    return 0;
}