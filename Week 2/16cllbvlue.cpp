#include <iostream>
using namespace std;
//pass by value or call by value - primary value will be coppied in secondary and primary value will not change
//pass by value - copy create hona
int inc(int b)   // here copy of a will be stored and this coppied value will change where as original value of a will not have any effect 
{                   // can also write a at place of b
    cout<<b<<endl;   //16
    b++;
    cout<<b<<endl;   //17
}

int main()
{
    int a=16;
    inc(a);

    cout<<a<<endl; //16
}