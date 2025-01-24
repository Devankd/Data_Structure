#include<iostream>
using namespace std;
// if 0 is also there in the array then previous code will give wrong  answer means will not count zero ie for non negative number
int find_target(int arr[], int index, int n, int target)
{
    if(index==n)
    {
        if(target ==0)
        return 1;
        else
        return 0;
    }

    return find_target(arr, index+1, n, target) + find_target(arr, index+1, n, target-arr[index]); 
}

int main()
{
    int arr[]={2,5,6,1,0};
    int target=8;
    int ans=find_target(arr, 0, 4, target);

    cout<<"target is found: "<<ans;
    return 0;
}