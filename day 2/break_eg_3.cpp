#include<iostream>
using namespace std;
int main(){

    int pin;
    while(true){
        cout<<"Enter PIN: ";
        cin>>pin;
        if(pin == 1234){
            cout<<"Login successfully :";
            break;
        }
        cout<<"wrong pin\n";
        }
        return 0;
    }
