#include<iostream>
using namespace std;

/*three method of passing 
   1)pass by value 
   2)pass by address
   3)pass by reference
   */
  // pass by value

 void swap(int a,int b)
 {                         // a,b formal parameter 
      cout<<a<<" "<<b;
      int temp;
      temp=a;
      a=b;
      b=temp;
      cout<<endl<<a<<" "<<b<<endl;

 } 
int main()
{
   int x=10,y=20;
   swap(x,y);
   cout<<x<<" "<<y;    //actual parameter, its value will not change(swap)
   return 0; 
}