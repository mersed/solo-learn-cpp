// What is the output of this code?
#include<iostream>
using namespace std;

void play(int& a, int& b) {
    if(&a != &b) {
        a ^= b;
        b ^= a;
        a ^= b;
        cout<< a<<":"<<b;
    }
}
int main() {   
    int a = 5;
    int b = 12;
    play(a, b);

    cout << endl;
    return 0;
}