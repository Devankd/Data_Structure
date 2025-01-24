#include <iostream>
using namespace std;

int main()
{   int n, sum=0;
    cout<<"number is";
    cin>>n;
     for(int i=1 ; i<=n ; i++)
    {
       sum=sum+i;
    }
    cout<<sum<<"is sum of first "<<n<<" numbers";
}