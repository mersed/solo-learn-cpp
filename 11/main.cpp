// What is the output of this code?
#include<iostream>
using namespace std;

int main() {
    int x[3] = {1, 2, 3};
    int (*p)[3] = &x;
    cout << (*p)[2];

    cout << endl;
    return 0;
}