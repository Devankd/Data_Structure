#include<iostream>
using namespace std;

int solve(int dividend, int divisor)
{
    int s=0;
    int e=dividend;
    int mid,ans;

    
    while(s<=e)
    {
        mid=s-(s-e)/2;   // in interview they will ask why you didnt written mid=(s+e)/2 ,because data will overflow when it is of 10^6 order
        //perfect solution 
        if(mid*divisor==dividend)
        {
            return mid;
        }
        // Not perfect solution
        //left search
        else if(mid*divisor>dividend)
        {
            e=mid-1;
        }
        // right search
        else
        {
            ans=mid;  // most important step, store mid in ans because it can be answer in 
            s=mid+1;
        }
    }
    return ans;

}

int main()
{
    int dividend=22;
    int divisor=7;

    int ans= solve(dividend,divisor);
    cout<<"Answer in integer form is "<<ans<<endl;

    double finalans=ans;
    double pr=0.1;
    int place;
    cout<<"upto how many decimal places ";
    cin>>place;


    for(int i=0;i<place;i++)
    {
        for(double j=finalans;divisor*j<=dividend;j=j+pr)
        {
            finalans=j;
        }
        pr=pr/10;
    }
    cout<<"answer upto "<<place<<" decimal places is "<<finalans;


}