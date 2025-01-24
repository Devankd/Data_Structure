#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[]={1,2,3};
    vector<int>brr{6,7,3,2,8};
    
    vector<int>crr;

    for(int i=0;i<3;i++)
    {
       for(int j=0;j<5;j++)
    {
        if(arr[i]==brr[j])
        {
            //mark
            brr[j]=-1; //
            //put value
            crr.push_back(arr[i]);
        }
    }
    }
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    return 0;
}