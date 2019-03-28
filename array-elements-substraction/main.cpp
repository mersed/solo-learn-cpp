#include<iostream>
#include<string>
using namespace std;

int main()
{   
    int a[3] = { 9, 3, 4};
    for(int i = 2; i > 0; i--) {
        a[0] -= a[i];
    }

    cout << a[0];
    cout << endl;
}