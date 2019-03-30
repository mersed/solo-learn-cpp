#include <iostream>
#include <string>

using namespace std;

void printSeparator();
void printHeader(int index, string desc);

void increment(int index);
void decrement(int index);

int main()
{   
    increment(1);
    decrement(2);

    return 0;
}


// GENERAL FUNCTIONS
void printHeader(int index, string desc)
{
    cout << endl << endl << index << ". " << desc << endl;
}

void printSeparator()
{
    cout << "------------------------" << endl;
}


// LOGIC FUNCTIONS
void increment(int index)
{
    printHeader(index, "Simple increment");
    printSeparator();

    // Code
    cout << "int i = 0;" << endl;
    cout << "i++;" << endl;
    cout << "cout << i;" << endl;

    // Logic
    int i = 0;
    i++;

    cout << endl << "Output: " << i << endl;

    printSeparator();
}

void decrement(int index)
{
    printHeader(index, "Simple decrement");
    printSeparator();

    // Code
    cout << "int i = 0;" << endl;
    cout << "i--;" << endl;
    cout << "cout << i;" << endl;

    // Logic
    int i = 0;
    i--;

    cout << endl << "Output: " << i << endl;

    printSeparator();
}