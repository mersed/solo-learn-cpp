// What is the output of this code?
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "What are they?\0 Do they see us?";
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '\0') {
            cout << str[++i];
        }
        cout << str[i];
    }


    cout << endl;
    return 0;
}