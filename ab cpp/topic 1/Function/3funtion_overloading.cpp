#include <iostream>
using namespace std;

int add(int x, int y)            //this is first function add
{
    return x+y;
}
int add(int x,int y,int z)       // this has different parameter list, so different fonction
{
    return x+y+z;
}
float add(float x, float y)     // this has different data type so different function 
{
    return x+y;
}
int main()               //here i can not right "void main()" 
{
    /*int a=10,b=5,c,d;
    c=add(a,b);
    d=add(a,b,c);

    int i=2.5f,j=3.5f,k;
    k=add(i,j);*/

    cout<<add(10,20)<<endl;
    cout<<add(10.5f,20.5f)<<endl;  // if i write 10.5 it will understand as double so written 10.5f 
    cout<<add(10,20,30)<<endl;     //10.5 means float value


}





/* int max(int ,int) 
   float max(float , float)           can define
   int max(int,int,int)               can define
   float max(int, int)         it is same as first function so we can not define it
*/