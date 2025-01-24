#include<iostream>
using namespace std;


  
  // pass by reference

 void swap(int &a,int &b)
 {                         // a,b formal parameter 
      cout<<&a<<" "<<&b<<endl;
      int temp;
      temp=a;
      a=b;
      b=temp;

 } 
int main()
{
   int x=10,y=20;
   swap(x,y);          // when call by reference is used then whole content inside of swap will be coppied here
  cout<<&x<<" "<<&y<<endl;
   cout<<x<<" "<<y;    //actual parameter, its value changed(swaped)
   return 0; 
}