#include<iostream>
using namespace std;

bool find_target(int arr[], int index, int n, int target)
{
    if(target==0)
      return 1;
    if(index==n || target<0)   // if target is less than 0 means since all digits are positive so target can not be zero since target-=arr[i]
      return 0;

    return find_target(arr, index+1, n, target) || find_target(arr, index+1, n, target-arr[index]);  // here || (or operator) is used so whan once target will be zero so find_target() value will become 1 so no further call will be done ie just after getting 1 it will return and no more cases will be executed this will save time ans space

}

int main()
{
    int arr[]={2,3,6};
    int target=8;
    bool ans=find_target(arr, 0, 3, target);

    if (ans)
    {
        cout<<"target is found"<<endl;
    }
    else{
        cout<<"target is not found"<<endl;
    }
    return 0;
}