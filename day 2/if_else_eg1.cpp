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
//The value of time is 16. The first condition (time < 12) is false, but the second condition (time < 18) is true. Because of this, the code inside the else if block runs, and "Good day." is printed.

//If the value of time was 22, none of the conditions would be true, and the program would print "Good evening." instead.

