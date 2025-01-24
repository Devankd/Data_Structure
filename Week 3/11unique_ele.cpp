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
    int n;
    cout<<"Enter the size of array(vector) ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the element "<<endl;
     for(int i=0;i<arr.size();i++)
     {
        cin>>arr[i];
     }

    int uniqueElement=find_unique(arr);

    cout<<"Unique element is "<<uniqueElement<<endl;
    return 0; 

}