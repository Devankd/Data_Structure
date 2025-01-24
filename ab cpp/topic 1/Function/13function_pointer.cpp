#include<iostream>
using namespace std;

void display()
{
    cout<<"Hello";
}

int main ()
{
    void (*fp)();   // declaration of function pointer
    fp=display;     //initialisation of fp
    (*fp)();        // call (dereferencing)
}