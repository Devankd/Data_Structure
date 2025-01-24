#include<iostream>
#include<vector>
using namespace std;


void subsequence(int arr[], int index, int n, vector<vector<int> >&ans, vector<int>temp)
{
    if(index==n)
    {
        ans.push_back(temp);  // subsequence stored in temp are stored in 2d array
        return;
    }
    // not included
    // when element at that index is not taken ie. NO
    subsequence(arr, index+1, n, ans, temp);
    //yes // included
    temp.push_back(arr[index]);              // when yes ie. that element is taken
    subsequence(arr, index+1, n, ans, temp);  // after taking that element then went to next index

}

int main()
{
    int arr[]= {1,2,3};
    int n=3;
    
    vector<vector<int>>ans;   

    vector<int>temp;

    subsequence(arr, 0, n, ans, temp);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}