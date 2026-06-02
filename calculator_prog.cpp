#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter a : ";
    cin >> a;
    cout<<"Enter b: ";
    cin >> b;
    int sum = a+b;
    cout<<"sum= " <<sum<<endl;
    int difference = a-b;
    cout << "difference= " <<difference<<endl;
    int product = a*b;
    cout <<"product= " <<product<<endl;
    int division = a/b;
    cout <<"division= " <<division<<endl;
    int modulus = a%b;
    cout <<"modulus= " <<modulus<<endl;
    return 0;
}
