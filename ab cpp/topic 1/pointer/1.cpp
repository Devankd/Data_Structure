#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;      //declaration //*p means p is pointing. in declaration and deferencing p * should be there.
    p=&a;           //during initialation no need of *. also can declare as int *p=&a.
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;    //dereferencing
}

/*
       why pointer?
       -Pointer is used to access heap memory.
       -Heap memory is allocated dynamically.
       - Java has no pointer.

*/