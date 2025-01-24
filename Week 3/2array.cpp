#include <iostream>
using namespace std; // size of an integer is 4bytes

int main()
{
    int arr[7]={3,4,5};
    cout<<arr<<endl;     // will print address of arr
    cout<<&arr<<endl;     // will print address of arr
    cout<<arr[0]<<endl;   //this will print value inside of arr
    char brr[]={'a', 'b', 'c'};   

    //in n size of array index starts from 0 to (n-1)
    // in array 0 based indexing hoti hai
    //address of any element at index i is = base address(adrress at i=0)+ index*datatype size 
    
    int array[10];
    //taking input
    for(int i=0;i<10;i++)
    {
        cin>>array[i];
    }
    cout<<endl;

//    printing output
    
    for(int i=0;i<10;i++)
    {
        cout<<array[i];
    }
    // storing some values

    int A[5]={0};    // 00000
    int B[5]={2};    //20000
    int C[5]={2,2,2,2,2}; //22222
    
    // memset
    int brray[10];
    int a=16;
}