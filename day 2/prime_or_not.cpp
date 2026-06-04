#include<iostream>
using namespace std;
int main(){
    int n = 8;
    bool isPrime = true;
    for(int i = 2;i<=n-1;i++){
        if(n%i==0){  //not prime
            isPrime = false;
            break;
        }
    }
    if (isPrime == true) {
        cout<<"prime number.\n";
    }
    else{
        cout<<"Non prime ";
    }
return 0;
    }

