#include <iostream>
using namespace std;


int findmax(int x,int y,int z)
{
    if(x>y&&x>z)
    return x;
    else if(y>z)
    return y;
    else
    return z;
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers ";
    cin>>a>>b>>c;
    cout<<endl<<"Max is "<<findmax(a,b,c)<<endl;
    return 0;
}