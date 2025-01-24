#include<iostream>
using namespace std;

// Target is a number which is sum of the numbers given in the array and a number cab be used as much times you want or till target becomes zero or less than one
int targetsum_repetion(int arr[], int n, int index, int target)
{
    if(target == 0)
        return 1;
    if(target<0 || index==n)
        return 0;
    
    return targetsum_repetion(arr,n , index+1, target)+ targetsum_repetion(arr,n , index, target-arr[index]);

    // first part or left pert ie. targetsum_repetion(arr,n , index+1, target) tells to move index one forword without considering that element of that array
    // second part or right part ie. targetsum_repetion(arr,n , index, target-arr[index]) tells to substract target without moving index
    // in this method, at place of making sum and then comparing with target, we are substracting target and if target becomes zero means we found one way to make sum == target 
}
int main()
{
    int arr[]={2,3,4};

    int n=3;
    int target= 6;
    int ans=targetsum_repetion(arr,n , 0, target);
    cout<<ans<<" times sum is equal to target ";
}