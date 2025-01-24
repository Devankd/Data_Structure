#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr{1,0,0,0,1,0,1,1,0,1,0,0};
    int size=arr.size();
    int start=0;
    int end=size-1;
    int i=0;

    while(i < end){
        if(arr[i]==0)
        {
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else
        {
            swap(arr[end],arr[i]);
            end--;
        }
    }

    //print array using for loop
    for(int i=0; i<size;i++)   
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // printing array using foreach loop
    for(auto val: arr)
    {
        cout<<val<<" ";
    }
    
}