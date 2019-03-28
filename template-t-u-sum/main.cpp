#include<iostream>
using namespace std;

template <class T, class U>
T sum(T x, U y) {
    return x + y;
}

int main()
{   
    cout << sum(5, 5.5);
    cout << endl;
}