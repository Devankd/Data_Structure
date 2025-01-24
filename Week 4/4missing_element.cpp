#include<iostream>
#include<vector>
using namespace std;
// first way is by taking 
int missing(vector<int>arr)
{
    int mid, start=0;
    int end=arr.size()-1;
    int ans;

    while(start<=end)
    {
        mid=start-(start-end)/2;
        if(arr[mid]-mid==1)
        {
            ans=arr[mid]+1;
            start=mid+1;
        }
        else if(arr[mid]-mid==2)
        {
            end=mid-1;  
        }
    }
    return ans;
}

int main()
{
    vector<int>arr{1,2,3,4,6,7,8};
    
    int missing_element=missing(arr);

    cout<<missing_element<<endl;
}