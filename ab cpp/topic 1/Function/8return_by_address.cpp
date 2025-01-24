#include<iostream>
using namespace std;

int *fun()
{    
    /*  int x=10;
        return &x;     // this will throw error because x is in stack and it will be deleted after completion of fun
   */
     int *p=new int[5];
     for(int i=0;i<5;i++)
     {
        p[i]=5*i;
     }
     cout<<p<<endl;
     return p;//this p will return location in heap    //this p will not be deleted after execution of fun because it is in heap memory
}



int main()
{
    int *q=fun();
    cout<<q<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;
    }

}