#include <iostream>
using namespace std;

int main()
{
    int a= 5;
    int* p = &a;

    int** q = &p;

    int*** r= &q;

    cout << &a << endl;   // 104
    cout << a << endl;    // 5
    cout << p << endl;    // 104
    cout << &p << endl;   // 218
    cout << *p << endl;   // 5
    cout << q << endl;    // 218
    cout << &q << endl;   // 308
    cout << *q << endl;   // 104
    cout << **q << endl;  // 5

}