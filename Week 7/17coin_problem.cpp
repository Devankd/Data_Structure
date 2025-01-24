#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&arr, int target)
{
    //Base case
    if(target==0)
    {
        return 0;
    }
    if(target<0)
    {
        return INT16_MAX;
    }
    //lets solve one case

    int mini= INT16_MAX;
}

int main()
{
    vector<int>arr{1,2};
    int target = 5;

    int ans=solve(arr, target);
    cout << "Answer is: "<<ans<<endl;


}