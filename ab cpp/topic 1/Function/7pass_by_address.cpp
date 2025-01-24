#include<iostream>
using namespace std;
  //call by address
 void swap(int *a,int *b)   // formal parameter, it will store in pointer, 
 {                         // a,b formal parameter 
    
      int temp;
      temp=*a;     // here *a means dereferencing, means value of a ie 10
      *a=*b;        // here we are swaping values not addresses
      *b=temp;
      

 } 
int main()
{
   int x=10,y=20;
   swap(&x,&y);      //actual parameter, it will send address so call by address 
   cout<<x<<" "<<y;   // value of actual parameter will be changed or swapped
   return 0; 
}