#include<iostream>
using namespace std;

// What is the output of this code?
int sum(int a, int b = 9) {
    return a + b;
}
int main() {   
    int (*psum)(int, int);
    psum = &sum;
    cout << (*psum)(9);

    cout << endl;
    return 0;
}