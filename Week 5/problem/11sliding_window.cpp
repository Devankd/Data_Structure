// longest substring without repeating character
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x=b/3;
        b -= x * 3 ;
        if(b != 0 && b+c < 3)
        {
            cout<< -1 <<endl;
        }
        else{
              int ans=a;
              c += b;
              
              ans += c/3;
              if(c % 3 != 0)
              {
                ++ans;
              }
              cout << ans <<endl;
        }


        // cin>>a>>b>>c;
        // if(b%3==0)
        // {
        //    x=b/3;
        //    if(c%3 != 0)
        //    {
        //      y=(c/3)+1;
        //    }
        //    else
        //    {
        //      y=c/3;
        //    }
        // }
        // else if(b%3 == 1)
        // {
        //    if(c >= 2)
        //    {
        //       x=b/3;
        //       y=(c/3)+1;
        //    }
        //    else
        //    {
        //       cout<<ans;
        //    }
        // }
        // else if (b%3 == 2)
        // {
        //     if(c >= 1)
        //    {
        //       x=b/3;
        //       y=(c/3)+1;
        //    }
        //    else
        //    {
        //       cout<<ans;
        //    }
        // }
        // else
        // {
        //     cout<<ans;
        // }
        
        // cout<<a+x+y;
    }
    
}