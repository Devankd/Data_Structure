#include <iostream>
using namespace std;

float add(float x,float y)   //this line is known as prototype or header or signature of a function
{
    float z;
    z=x+y;
    return z;
}
int main()
{
    float a=10.25,b=14.5,c;   //here also can take variable x,y,z
    c=add(a,b);
    cout<<"sum is: "<<c;
}