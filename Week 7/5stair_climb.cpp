#include<bits/stdc++.h>
using namespace std;

int climbstair(int n)
{
    if(n==1 || n==0)   // in case n>=1, if(n==1)return 1; if(n==2)return 2;
      return 1;

    return climbstair(n-1) + climbstair(n-2);  
}
int main()
{
    int n;
    cout<<"Number of stairs want to climb: ";
    cin>>n;
    
    int ans= climbstair(n);
    cout<<"Number of ways to climb stair is: "<<ans;
}