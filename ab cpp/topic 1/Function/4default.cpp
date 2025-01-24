#include <iostream>
using namespace std;


/* 
int add(int x, int y) 
{            
    return x+y;
}
int add(int x,int y,int z)       
{
    return x+y+z;
}

int main()
{  cout<<add(10,20)<<endl;
   cout<<add(10,20,30)<<endl; 
}
*/

// above code can be written as

int add(int x,int y,int z=0)       //here z=0 is default argument means if i will write some value at the place of z then it will take that value otherwise stay 0
{
    return x+y+z;
}
int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(10,20,30)<<endl; 
}