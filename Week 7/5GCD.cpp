#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    a=a%b;
    GCD(b,a);
}
int main()
{
    int a=18;
    int b=48;

    cout<<"Gcd of a and b is "<<GCD(a,b);
    return 0;
}