#include<iostream>
using namespace std;
// below each class has same number of int and char element but total memory taken by them are different
class x  
{
    int a;
    char b;
    char c;
};

class a   
{
    char d; 
    int e;
    char f;
};

class z
{
   char g;
   char h;
   int i;
};

int main()
{
  

   // class a
   a obj1;
   cout<<sizeof(obj1)<<endl;  // 12

   //class x
   x obj2;
   cout<<sizeof(obj2)<<endl;  // 8

   // class z
   z obj3;
   cout<<sizeof(obj3)<<endl;  // 8


}