#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int arr[]={4,5,6,7,8,9};
    int size=6;
    if(binary_search(arr,arr+size,8))
    {
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}