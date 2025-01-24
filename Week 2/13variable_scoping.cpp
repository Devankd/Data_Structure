#include<iostream>
using namespace std;

int main()
{
    //declaration 
    int a;
    //initialisation
    int b=5;
    // updation
    b=10;

    // int b=7;  // you can not redefine same variable in same fuction
    if(1)
    {
        int b=15;    // here redefined but in new function
        cout<<b<<endl;  //15  // scope of variable b=15 is inside of if curly braces only and outside of this value variable b=10 which is inside of main function
    }
    cout<<b;     //10     
    return 0;
}