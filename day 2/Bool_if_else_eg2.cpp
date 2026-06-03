#include<iostream>
using namespace std;
int main(){
    int time = 16;
    bool isMorning = time < 12;
    bool isDay = time < 18;
    if (isMorning){
        cout<<" good morning\n";
    }
    else if(isDay){
        cout<<"good day. ";
    }
    else{
        cout<<"good evening";
    }
    return 0;
    }