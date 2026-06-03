#include<iostream>
using namespace std;

int main() {

    for(int roll = 1; roll <= 50; roll++) {

        if(roll == 23) {
            cout << "Friend found!" << endl;
            break;
        }

        cout << "Checking roll " << roll << endl;
    }

    return 0;
}