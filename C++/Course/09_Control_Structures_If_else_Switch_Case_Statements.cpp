// for more check notebook

#include<iostream>

using namespace std;

int main(){
    
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;

    // 1. Selection control structure: If else-if else ladder
    // all ifs require else and all else require previous if 

    if((age<18)&&(age>0)){
        cout<<"You cannot come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will be given a kid's pass"<<endl;
    }
    else if(age<1){
        cout<<"You aren't even born yet"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }

    // 2. Selection control structure: Switch Case statements
    // if you dont us break , the code will execute all the cases following the true case 
    
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;

    case 16:
        cout<<"You are 16"<<endl;
        break;

    case 22:
        cout<<"You are 22"<<endl;
        break;
    
    default:
        cout<<"You can come to the party"<<endl;
        break;
    }


    return 0;
}
