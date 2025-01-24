#include<iostream>
using namespace std;

void util(int* ptr)   // here pass by value is taking so copy is created here 
{
    //ptr = ptr+1;    // this ptr & p in main is different , let ptr=204, so now ptr= 208. value of a will not change
    *ptr = *ptr +1;
}

int main()
{
    int a=5;

    int*p=&a;

    cout << "before "<<endl;
    cout << a <<endl;
    cout << p <<endl;
    cout << *p <<endl;

    util(p);                  // copy create 
    cout << "After "<<endl;
    cout << a <<endl;
    cout << p <<endl;
    cout << *p << endl;
    return 0;
}