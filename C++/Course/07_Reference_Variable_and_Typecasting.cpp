#include<iostream>

using namespace std;

int c = 45;

int main(){

    // *************Build in Data types****************

    // int a,b,c;
    // float d=34.4; 
    // cout<<"Enter the value of a :"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b :"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The value of c is "<<c <<endl;
    // cout<<"The value of Global c is "<<::c; //Scope Resolution Operator - used to increase scope of a variable

    // ************* Float, double and long double Literals****************

    // float d=34.4;
    // long double e=34.4;
    
    // 34.4 by default is double 
    // however 34.4f is float and 34.4l is long double 

    // cout<<"The value of d is "<<endl<<d<<"The value of e is "<<e;
    // cout<<"The size of 34.4  is "<<sizeof(34.4) <<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // *************Reference Variables**************** 

    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting**************** 

    int a = 45;   
    float b = 45.46;

    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;

    return 0;
    
}

