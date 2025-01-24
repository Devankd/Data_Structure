#include<iostream>
#include<vector>

using namespace std;

int solve(vector<int>ar)
{
    int s=0;
    int e=ar.size()-1;
    int mid;

    while(s<=e)
    {
        mid=s-(s-e)/2;
        //single element
        if(s==e)
        {
            return s;
        }
        // two cases - mid erven or mid odd
        if(mid%2==0)
        {
            if(ar[mid]==ar[mid+1])
            {
                s=mid+2;
            }
            else
            {
                e=mid;
            }
        }
        else  
        {
             if(ar[mid]==ar[mid-1])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    
    int ans=solve(arr);
    cout<<"Index is "<<ans<<endl;
    cout<<"value is "<<arr[ans]<<endl;
}