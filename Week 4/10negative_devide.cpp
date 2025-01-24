#include<iostream>
using namespace std;

int solve(int dividend, int divisor)
{
    int s=0;
    int e=abs(dividend);
    int mid,ans;

    
    while(s<=e)
    {
        mid=s-(s-e)/2;   // in interview they will ask why you didnt written mid=(s+e)/2 ,because data will overflow when it is of 10^6 order
        //perfect solution 
        if(abs(mid*divisor)==abs(dividend))
        {
            ans=mid;    // important step to store mid to make to print ans with sign
            break;
        }
        // Not perfect solution
        //left search
        else if(abs(mid*divisor)>abs(dividend))
        {
            e=mid-1;
        }
        // right search
        else
        {   //store answer
            ans=mid;  // most important step, store mid in ans because it can be answer in 
            // right search
            s=mid+1;
        }
    }
    if((divisor<0 && dividend<0)||(divisor>0 && dividend>0))

     { return ans;}
     else{
        return -ans;
     }

}

int main()
{
    int dividend=-22;
    int divisor=11;

    int ans= solve(dividend,divisor);
    cout<<"Answer in integer form is "<<ans<<endl;

    // double finalans=ans;
    // double pr=0.1;
    // int place;
    // cout<<"upto how many decimal places ";
    // cin>>place;


    // for(int i=0;i<place;i++)
    // {
    //     for(double j=(finalans);abs(divisor)*j<=abs(dividend);j=j+pr)
    //     {
    //         finalans=j;
    //     }
    //     pr=pr/10;
    // }
    // cout<<"answer upto "<<place<<" decimal places is "<<finalans;


}