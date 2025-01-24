#include<iostream>
using namespace std;
// reference variable can never be null whwre as pointers can be null
// refrence variable is easy to use as compare to pointer and readibility is also good
int main()
{
    int a = 5;
    int& b = a;       // reference variable b 
    // here a and b are variable name which is denoting same memory location 
    cout<< a <<endl;
    cout<< b <<endl;
    a++;
    cout<< a <<endl;
    cout<< b <<endl;
    b++;
    cout<< a <<endl;
    cout<< b <<endl;
}
// same memory location but different name