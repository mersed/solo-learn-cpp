// What is the output of this code?
#include<iostream>
using namespace std;
int main() {   
    int mas[9] = {2, 6, 3, 9, 1, 0, 5, 8, 4};
    int * p = new int[9];
    for(int i = 0; i < 9; ++i) {
        p[i] = mas[i];
    }
    int n1 = sizeof(mas) / sizeof(*mas);
    int n2 = sizeof(p) / sizeof(*p);
    cout << n1 << n2;

    cout << endl;
    return 0;
}