#include<iostream>
#include<vector>

using namespace std;
// Ways to sum to N -GFG  TimeLimitExceed

int way(vector<int>&arr, int m , int sum)
{
    if(sum==0)
     return 1;
    if(sum<0)
     return 0;
    
    long long ans=0;  //long is used for large value
    for(int i=0; i<m;i++)
    {
        ans+=way(arr, m, sum-arr[i]);
    }  
    return ans%1000000007;  // given in question to return 

  
}

int main()
{
    vector<int>arr{1,5,6};
    
    int m = arr.size();
    cout<<way(arr,m, 7);

    
    
}