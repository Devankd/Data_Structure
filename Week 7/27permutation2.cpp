#include<iostream>
#include<vector>

using namespace std;
// permutation when some of the give digits are repeating 
// but in this it is said to not use temp or visited

void permute(vector<int>&arr, vector<vector<int> >&ans, int index)
{
    if(index==arr.size())
    {
        ans.push_back(arr);
        return;
    }
    
    vector<bool>use(21,0);  // to check whether digit in arr is used or not
    // here numbers are asumed to be from -10 to 10 total 21

    for(int i=index; i<arr.size();i++ )
    {
        if(use[arr[i]+10] ==0){

        use[arr[i]+10]=1;    
        swap(arr[i], arr[index]);
        permute(arr, ans, index+1);
        swap(arr[i], arr[index]);    // for making arr as it was before swapping
    }
    }
}

int main()
{
    vector<int>arr{1,1,3};
    vector<vector<int> >ans;
    
    
    permute(arr, ans,0);

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
           cout<<ans[i][j]<<" ";
        }  
        cout<<endl;
    }
    
}