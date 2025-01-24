#include <iostream>
using namespace std;

int main()
{
    int n, factor;
    cout<<"enter number";
    cin>>n;

    for(int i= 1 ; i<=n ; i++)
    {
        if(n%i == 0)
        {
            cout<<i<<endl;
        }
    }
}