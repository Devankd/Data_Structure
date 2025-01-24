#include<iostream>
#include<vector>
using namespace std;

// more optimized code 
// to optimize this code use temp as reference and add a temp.pop_back() after subsequence
void subsequence(int arr[], int index, int n, vector<vector<int> >&ans, vector<int>&temp)  // first change of reference variable
{
    if(index==n)
    {
        ans.push_back(temp);  
        return;
    }
    // not included
    subsequence(arr, index+1, n, ans, temp);
    // included
    temp.push_back(arr[index]);              
    subsequence(arr, index+1, n, ans, temp);  
    temp.pop_back();         // 2nd change empty the temp
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