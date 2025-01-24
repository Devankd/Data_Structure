#include <iostream>
using namespace std;

int main()
{
    int A[5]{2,4,6,8,9};
    int *p=A, *q=&A[4];

    cout<<p-q<<endl;
    cout<<q-p<<endl;

    cout<<*p<<endl;    // prints 2
    p++;               // for pointer arithmatic donot need to write * here
    cout<<*p<<endl;    // prints 4
    p--;
    cout<<*p<<endl;    //prints 2

    cout<<p<<endl;     // location fo 2
    cout<<p+2<<endl;    // location of 6 whose diatance is 8bit from 2

    for(int i=0; i<5; i++)
    {
        cout<<A[i]<<endl;     //prints all the elements of A
    }
    cout<<endl;


    for(int i=0; i<5; i++)
    {
        cout<<i[A]<<endl;     // A[i]== i[A] == *(p=i) == p[i] ie. p acts as A
    }
    cout<<endl;


    for(int i=0; i<5; i++)
    {
        cout<<*(A+i)<<endl;
    }
    cout<<endl;


    for(int i=0; i<5; i++)
    {
        cout<<A+i<<endl;         // prints location and A+i == p+i
    }
    cout<<endl;


    for(int i=0; i<5; i++)
    {
        cout<<p+i<<endl;
    }
    cout<<endl;


    for(int i=0; i<5; i++)
    {
        cout<<*(p+i)<<endl;
    }
    cout<<endl;


    for(int i=0; i<5; i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<endl;


    cout<<p<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<*p<<endl;
        p++;
    }
    cout<<p<<endl;
    
    return 0;
}