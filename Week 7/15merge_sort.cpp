#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int mid,int start, int end)
{
    vector<int>temp(end-start+1);
    int left=start, right=mid+1, index=0;

    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++,left++;
        }
        else
        {
            temp[index]=arr[right];
            index++,right++;
        }  
    }
    //if left array is not empty yet
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++,left++;
    }
    // if right is not empty yet
    while(right<=end)
    {
        temp[index]=arr[right];
        right++,index++;
    }
    
    // put these value in original array
    index=0;

    while(start<=end)
    {
        arr[start]=temp[index];
        start++,index++;
    }
     
}

void merge_sort(int arr[], int start, int end)
{
    if(start==end)
    { 
       return;
    }
    
    int mid=start+(end-start)/2;
    //left side
    merge_sort(arr, start, mid);
    //right side
    merge_sort(arr, mid+1, end);
    // merging halved array
    merge(arr, mid, start, end);

}

int main()
{
    int arr[]= {6,3,1,2,8,9,10,7,3,10};
    int n=10;
    int start=0,end=9;

    merge_sort(arr,start,end);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}