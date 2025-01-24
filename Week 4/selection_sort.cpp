#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int>A)
{
    int n= A.size();
    for(int i=0; i< n-1; i++)
    {
        int index= i;
        for(int j=i+1; j< n; j++)
        {
            if(A[j]<A[index])
            {
                index=j;
            }
        }
        
        swap(A[i], A[index]);
        
    }
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    vector<int>arr = {7,4,3,8,2};

    selection_sort(arr);
}