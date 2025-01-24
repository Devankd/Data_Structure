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
    //pair sum
    vector<int>arr{10,20,30,40,50,60};

    //print all pair
    // outer loop will traverse for each elements
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];

        // for every element traverse on aage walle elements
        for(int j=i+1;j<arr.size();j++)
        {
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            
        }
    }

    
    return 0; 

}