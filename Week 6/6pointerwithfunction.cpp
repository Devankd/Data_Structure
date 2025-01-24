#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// here pointer is passing which contain address & on changing array here original arrray in main() will change
void solve( int arr[])    // by default array always pass by refference so here pointer will pass and pointer contain address & value of address is 4(hexadecimal form)
{
    cout<< "Size of arr inside solve function "<<  sizeof(arr) << endl;  // 4
    cout<<"arr: "<<arr<<endl;     // this is same in main and solve function
    cout<<"&arr: "<<&arr<<endl;   // &arr of main function is different from this &arr
    arr[0]=50;
}

int main()
{
    int arr[10]= {1,2,3,4};
    cout<< "Size of arr inside main function "<<  sizeof(arr) << endl;  // 40


    cout<<"arr: "<<arr<<endl;
    cout<<"&arr: "<<&arr<<endl;

    // printing array
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl<<endl;

    solve(arr);

    cout<<" Printing after callling solve function "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}