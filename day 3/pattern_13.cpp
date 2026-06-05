#include<iostream>
using namespace std;
int main(){
    char ch;
    int n=4;
    ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

}