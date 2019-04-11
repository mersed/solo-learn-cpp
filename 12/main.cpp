// What is the output of this code?
#include<iostream>
using namespace std;

int main() {
    char c[] = {'a', 'b', 'c', 'f'};
    ++c[2];
    c[2] += c[1] - c[0];
    for(unsigned i = 0; i < 4; i++)
        cout << c[i];

    cout << endl;
    return 0;
}