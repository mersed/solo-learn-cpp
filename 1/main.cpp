#include<iostream>
using namespace std;

// What is the output of this code?
int calc(int x, int y) {
    return (x * y) / (x + y);
}

int main() {   
    int a = 20;
    int b = a/4;
    int result = calc(a, b);
    cout << result;

    cout << endl;
    return 0;
}