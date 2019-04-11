// What is the output of this code?
#include<iostream>
using namespace std;

int main() {
    int x = 3;
    while (x++<10) {
        x+=2;
    }

    cout << x;
    cout << endl;
    return 0;
}