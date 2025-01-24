#include<iostream>
#include<vector>
using namespace std;

int find_unique(vector<int>arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=arr[i]^ans;  //^ is xor operand 
    }
    return ans;
}


int main()
{
    //triplet sum
    vector<int>arr{10,20,30,40,50,60};
    int sum=80;

    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];

       for(int j=i+1;j<arr.size();j++)
        {
            for(int k=j+1;k<arr.size();k++)
            {
                if(element+arr[j]+arr[k]==sum)
                {
                    cout<<"Triplet found "<<element<<","<<arr[j]<<","<<arr[k]<<endl;
                }
            }   
        }
    }
    return 0;
}