#include<iostream>
using namespace std;
int main(){
    for(int i = 1;i<=100;i++){
        if(i == 25){
            cout<<"found"<<endl;
            break;
        } 
        cout<<i<<endl;
    }
    return 0;
}