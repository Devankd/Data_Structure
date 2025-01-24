#include<iostream>
using namespace std;

int findsqrt(int n)
{
    int s=0;
    int e=n;
    int mid,ans;
    while(s<=e)
    {
        mid=s-(s-e)/2;      // in interview they will ask why you didnt written mid=(s+e)/2 ,because data will overflow when it is of 10^6 order 
        if(mid*mid==n)
        {
            return mid;
        }
        if(mid*mid>n)
        { //left search
           e=mid-1;
        }
        else if( mid*mid<n)
        {
            //ans store
            ans=mid;
            //right search
            s=mid+1;
        }
    }
    return mid;
}

int main()
{
    int n;
    cout <<"Enter the number ";
    cin>>n;

    int ans = findsqrt(n);
    cout<<"Ans is "<<ans<<endl;// answer in integer form

    int precision;
    cout<<"Enter floating digits in pricision ";
    cin>>precision;

    double step=0.1;
    double final_ans=ans;
    for (int i=0;i<precision;i++)
    {
        for(double j=final_ans;j*j<=n;j=j+step)
        {
            final_ans=j;
        }
        step=step/10;
    } 
    cout<<"final ans is "<<final_ans<<endl; //answer in decimal form
    return 0;

}