#include<iostream>
using namespace std;
int main(){
    int marks;
        cout<<"Enter marks: ";
        cin>>marks;
        if(marks>=90){
            cout<<"A\n";

        }
        else if(marks>=75){
            cout<<"B\n";
        }
        else if(marks>=50){
            cout<<"C\n";

        }
        else if(marks>=35){
            cout<<"D ";
        }
        else{
            cout<<"Fail";
        }
        return 0;
    }
