#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    // int* p= a; // this will throw error because p only store address which is hexagonal


    int* p = &a ;   // from here p= address of a

    // copy pointer

    int* q = p ;    // from here q = p which is address of a 
    int* r = q ;    // from here r = q which is address of a 
 
    cout << a << endl;  // 10
    cout << &a << endl;  // address of a
    cout << p << endl;   // address of a
    cout << &p << endl;  // address of p
    cout << *p << endl;  //10
    cout << q << endl;   // address of a
    cout << &q << endl;  // address of q
    cout << *q << endl;  //10
    cout << r << endl;   // address of a
    cout << &r << endl;  // address of r
    cout << *r << endl;  //10
    cout << (*p + *q + *r) << endl;  // 30
    cout << (*p)*2 + (*r)*3 << endl;   //50
    cout << (*p/2) - (*r)/2  << endl;   //0
  
}