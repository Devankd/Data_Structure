#include<iostream>
using namespace std ;

int g=10;

void fun()
{
    int g=3;  
    {
        int g=20;
        g++;               // increase which is is at nearest scope
        cout<<g<<endl;     //21
    } 
    g++;                   //this wil increment of nearest scope ie. local g.    
    cout<<g<<endl;         // 4

    cout<<::g<<endl;       // scope resolution x(::x) will print globle variable. 
}

int main()
{ 
    cout<<g<<endl;        //10
    fun();                //there was no effect on globle variable  
    cout<<g;              //10
    return 0;
}