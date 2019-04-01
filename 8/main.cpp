// What is the output of this code?
#include<iostream>
using namespace std;

class A {
    public:
        A() { foo(); }
        ~A() { foo(); }
        void foo() {
            cout << 3;
        }
        void bar() { foo(); }
};
class B : public A {
    void foo() { cout << 2;}
};
int main() {   
    B b;
    b.bar();

    return 0;
}