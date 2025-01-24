#include<iostream>
#include<vector>
using namespace std;


void rotate(vector<int>&arr, int k)
{
   if(k==0)
    return;
    int n=arr.size();
    k=k%n;
    while(k--)
    {  int x=arr[n-1];
       for(int i=n-1; i>0; i--)
       {
         swap(arr[i], arr[i-1]);
       }
       arr[0]=x;
    }
}

int main()
{
    vector<int>arr{1,2,3,4,5};
    int k=3;
    rotate(arr, k);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}