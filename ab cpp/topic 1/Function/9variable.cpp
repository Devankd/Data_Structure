#include<iostream>
using namespace std ;

int g=10;

void fun()
{
    int g=3;   
    g++;      
    cout<<g<<endl;   // 4
}

int main()
{ 
    cout<<g<<endl;    //10
    fun();    //there was no effect on globle variable  
    cout<<g;          //10
    return 0;
}