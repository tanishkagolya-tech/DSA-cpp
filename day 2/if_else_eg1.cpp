#include<iostream>
using namespace std;
int main(){
    int time = 16;
    if (time < 12){
        cout<<"Good Morning\n";
        
    }
    else if (time < 18){
        cout<<"Good day. ";
    
    }
    else{
        cout<<"Good evening";
    }
    return 0;
}