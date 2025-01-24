#include<iostream>
#include<vector>
using namespace std;
// to find sum of each element of an subset

void subsequence(int arr[], int index, int n, vector<int>&ans, int sum)
{
    if(index==n)
    {
        ans.push_back(sum);  // sum stored in ans array
        return;
    }
    // not included
    // when element at that index is not taken ie. NO
    subsequence(arr, index+1, n, ans, sum);
    //yes // included
    sum+=arr[index];              // when yes ie. that element is added in sum
    subsequence(arr, index+1, n, ans, sum);  // after taking that element then went to next index 
    // subsequence(arr, index+1, n, ans, sum+arr[index]);   // at place of above two line this one line can be written
     sum=0;

}

int main()
{
    int arr[]= {1,2,3};
    int n=3;
    
    vector<int>ans;   

    int temp=0;

    subsequence(arr, 0, n, ans, temp);
    for(int i=0;i<ans.size();i++)
    {
            cout<<ans[i]<<" "; 
    }
    return 0;
}