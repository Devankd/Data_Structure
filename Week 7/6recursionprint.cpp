#include<iostream>
using namespace std;

void print(int arr[], int n, int i)
{
    //base case
    if(i==n)
    return;
    
    cout<<arr[i]<<" ";
    print(arr, n, i+1 ); // or use ++i but dont use i++
}

void alt_print(int arr[], int n)
{
    //base case
    if(n==0)
    return;
    cout<<arr[0]<<" ";

    alt_print(arr+1, n-1);
}

void rev_print(int arr[], int n, int i)
{
    //base case
    if(i==n)
    return;
    
    rev_print(arr, n, i+1 );
    
    cout<<arr[i]<<" ";
}


int main()
{
    int arr[5]= {10,20,30,40,50};
    int n=5;
    int i=0;
    print(arr, n, i);
    cout<<endl;

    alt_print(arr, n);
    cout<<endl;

    rev_print(arr, n, i);
return 0;
}
