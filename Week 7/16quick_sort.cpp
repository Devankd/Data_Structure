#include<iostream>
using namespace std;

int partition(int arr[], int start, int end)  
{
    int pos=start;
    for(int i=start; i<=end; i++)
    {
        if(arr[i]<=arr[end])     // take last element as pivote element then place it to its respective place
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quick_sort(int arr[], int start, int end)
{
    if(start >= end)   // if there is only one or no element then return
    {
        return;
    }
    // since array is passing by refference at each place so any change will reflect in original array
    int pivote= partition(arr, start, end);   // assume last element as pivote element, then place it on its right index by keeping smaller & equal left to it and larger right to it and it will give index of pivote element which is in sorted position (ie on left smaller/equal and on right greater of pivote)
    quick_sort(arr, start, pivote-1);  // take left part of array of pivote
    quick_sort(arr, pivote+1, end);   // take right part of array from pivote element 
}

int main()
{
    int arr[]={6,2,5,1,4,2,3};  // size=7
    quick_sort(arr, 0, 6);

    for(int i=0; i<7; i++)
    {
       cout<< arr[i]<<" ";
    }
    return 0;
}
