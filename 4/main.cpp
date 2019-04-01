#include<iostream>
using namespace std;

// What is the output of this code?
int main() {   
    int i = 0, x = 10;
    int arr[] = {7, 5, 3, 1};
    for(; i<2; i++) {
        x %= arr[i];
        cout << x;
    }
    cout << arr[i];

    cout << endl;
    return 0;
}