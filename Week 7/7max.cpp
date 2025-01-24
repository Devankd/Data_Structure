#include<iostream>
using namespace std;

void findMax(int ar[],int n, int i,int& maxx)
{
    //base case
    if(i==n)
    {
        return;
    }
    // one case solved
    if(maxx<ar[i])
    {
        maxx=ar[i];
    }
    // recursion
    findMax( ar,n, i+1, maxx);
    

}

int main()
{
    int arr[10]= {5,2,4,9,1,8,3,7,10,6};
    //first way
    int maxi= INT8_MIN;
    for(int i=0; i<10; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    cout<<maxi<<endl;
    //second way
    int maxim=INT8_MIN;
    for(int i=0;i<10;i++)
    {
        maxim= max(maxim, arr[i]);
    }

    cout<<maxim<<endl;

    //third way  //recursion way
    int j=0;
    int maxx= INT8_MIN;
    int n=10;
    findMax(arr, n, j, maxx);
    cout<<"The maximum is "<<maxx;
    return 0;
}