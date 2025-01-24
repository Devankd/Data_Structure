#include<iostream>
using namespace std;



int main()
{
    int t;
    cin>>t;

     while(t--)
     {
        int a;
        cin>>a;
        int b;
        cin>>b;

        if(a%2==0 || b%2==0)
        {
            if(a/2!=b &&b/2!=a)
           {
            cout<<"Yes"<<endl;
           }
           else
            cout<<"No";
           } 
        else
        {
         cout<<"No";
        }
     }
return 0;
}