#include<iostream>
using namespace std;
int main(){
    //find char is lower or uppercase
    char ch;
    cout<<"enter char : ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase\n";
    }
    else{
        cout<<"uppercase";
    }
    return 0;

}
//or we can also use ascii no. for uppercase 65-90