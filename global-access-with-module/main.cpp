#include<iostream>
using namespace std;

int i = 10;
int main()
{   
    int i = 20, c = 7;
    cout << i + ::i % c;
    return 0;
}