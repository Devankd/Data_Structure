#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cout<<"enter number";
    cin>>n;
    while(n>0){          // n=456
        r=n%10;          // r=456%10 = 6
        n=n/10;          // n=456/10 = 45
        cout<<r<<endl;
    }
 
}