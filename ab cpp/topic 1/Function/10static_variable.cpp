#include<iostream>
using namespace std ;


void fun()
{   
    int h=10;         // g got memory in stack section and get deleted when function terminates each time
    h++;
    static int g=3;   // g got memory in code section and donot get deleted even when function terminates
    g++;      
    cout<<h<<endl; 
    cout<<g<<endl;   
}

int main()
{            // h    g
    fun();   // 11   4
    fun();   // 11   5
    fun();   // 11   6
    return 0;
}
// static variable is like global variable in terms of memory i.e. once memory is given then terminates only when whole programm terminates but it is only 
// accessible in that function in which it is declared