#include<iostream>
using namespace std;

// What is the output of this code?
int v[10] = {42};
int& g(int i) {
    return v[i];
}
int main() {   
    g(3) = 7;
    cout << v[1] << v[2] << v[3];

    cout << endl;
    return 0;
}