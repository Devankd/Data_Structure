#include<iostream>
#include<vector>
using namespace std;


int main()
{
    //pair sum
    vector<int>arr{10,20,30,40,50,60};
    int sum=80;
    //print all pair
    // outer loop will traverse for each elements
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];

        // for every element traverse on aage walle elements
        for(int j=i+1;j<arr.size();j++)
        {
          if(element+arr[j]==sum)
          {
            cout<<"Pair found "<<element<<","<<arr[j]<<endl;
          }
            
        }
    }

    
    return 0; 
}