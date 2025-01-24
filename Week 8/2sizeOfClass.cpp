#include<iostream>
using namespace std;

class x  //size of a epmty class is 1 byte
{

};

class a   // 8 byte 4+4+4
{
    int b;  // size of int is 4 byte
    int c;
    int d;
};

class z  // total memory 8 byte // padding 
{
   int l;   // 4 byte
   char m; // size of char is 1 byte
};

int main()
{
  

   // class a
   a obj1;
   cout<<sizeof(obj1)<<endl;

   //class x
   x obj2;
   cout<<sizeof(obj2)<<endl;

   // class z
   z obj3;
   cout<<sizeof(obj3)<<endl;
   
   // padding concept left onn lec no-70, coder army


}