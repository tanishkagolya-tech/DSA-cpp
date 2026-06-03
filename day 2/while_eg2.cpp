#include<iostream>
using namespace std;

int main() {
    int i = 1;
    int n = 45;
    int sum = 0;

    while(i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}