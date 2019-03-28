#include<iostream>
#include<string>
using namespace std;

int main()
{   
    int x = 2;
    switch(x) {
        case 0: cout << "I";
        break;
        case 1: cout << "love";
        case 2: cout << "going ";
        case 3: cout << "shopping";
        break;
        case 4: cout << "on Monday";
    }
}