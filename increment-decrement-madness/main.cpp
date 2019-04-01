#include <iostream>
#include <string>

using namespace std;

void printSeparator();
void printHeader(int index, string desc);

void increment(int index);
void decrement(int index);
void incrementAssignmentPrefix(int index);

int main()
{   
    int x = 4;
    int *a = &x;
    x--;
    *a=15;

    cout << x;

    //increment(1);
    //decrement(2);
   // incrementAssignmentPrefix(3);
    //incrementAssignmentSufix(4);

    return 0;
}


// GENERAL FUNCTIONS
void printHeader(int index, string desc)
{
    cout << endl << index << ". " << desc << endl;
}

void printSeparator()
{
    cout << "-------------------------------------------------" << endl;
}


// LOGIC FUNCTIONS
void increment(int index)
{
    printHeader(index, "Simple increment");
    printSeparator();

    // Logic
    int i = 0;
    i++;

    cout << i << endl;

    // Explanation: Not needed

    printSeparator();
}

void decrement(int index)
{
    printHeader(index, "Simple decrement");
    printSeparator();

    // Logic
    int i = 0;
    i--;

    cout << i << endl;

    // Explanation: Not needed

    printSeparator();
}

void incrementAssignmentPrefix(int index)
{
    printHeader(index, "Increment prefix and assignment.");
    printSeparator();

    // Logic
    int i = 5, j = 4;
    i = ++i;
    cout << i << endl;

    j = ++i;
    cout << j << endl;

    // Explanation:
    // Lets go through this code!
    //
    // int i = 5, j = 4;
    //
    // i = ++i; --> will be executed in 2 steps:
    // 1. First increment is executed, both i's on the left and right side will be 6.
    // 2. Second we are assigning 6 to the i (which is already 6) --> This is not atomic operation as a whole.
    //
    // j = ++i; --> will be executed in 2 steps:
    // 1. First increment is executed, i = 7, while j = 4;
    // 2. Second we are assigning i to j, which means that j will be equal to 7 as well.

    printSeparator();
}