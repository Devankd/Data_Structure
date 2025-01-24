#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[]={1,2,3};
    int sizea=3;
    int brr[]={6,7,8};
    
    vector<int>crr;
    for(int i=0;i<sizea;i++)
    {
        crr.push_back(arr[i]);
    }
    for(int i=0;i<3;i++)
    {
        crr.push_back(brr[i]);
    }
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    return 0;
}