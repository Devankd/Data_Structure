#include <iostream>
using namespace std;

void inc(int brr[],int size)
{
    brr[0]=100;
    brr[1]=200;
    brr[2]=500;

}

int main()  // pass by reference means updation in actual array
{
    int arr[5]={8,5,4,3};
    int size=5;
    inc(arr,size);     

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}