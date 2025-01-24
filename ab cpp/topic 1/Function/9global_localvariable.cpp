#include<iostream>
using namespace std;

int g=0;    // g=0, global variable

void fun()
{
    int a=5;    //local variabe
    g=g+a;      //2) g= 20
    cout<<g<<endl;
}
int main()
{
    int x=10;  // local variable
    g=15;     //1) g=15
    fun();
    g++;      //3) g= 21
    cout<<g;
    return 0;
}
// global variable are available as long as program is running and accessible in all function in program
//variable inside function is local and outside function is globle variable
//local variable are not exxesible outside that function where declared and as that function ends that variable terminated
//local variable get memory in stack but globle variable get memory in code section