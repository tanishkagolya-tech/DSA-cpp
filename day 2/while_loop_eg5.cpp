#include<iostream>
using namespace std;
int main(){
    int money = 100;
    while(money>0){
        cout<<"Money left = " << money <<endl;
        money -=10;
    }
    return 0;
}