#include<iostream>
using namespace std;

int main()
{
    int arr[4]= {12,24,36,78};
    
    cout<< arr << endl;      // base address -> 104
    cout<< arr[0] << endl;   // 12
    cout<< &arr << endl;     // 104   // base address
    cout<< &arr[0] << endl;  // 104

    int* p=arr;
    cout<< p << endl;       // 104
    cout<< &p << endl<< endl;      // 204
    
    cout<< *arr << endl;   
    cout<< arr[0] << endl;  // arr is the pointer to first location of the array
    cout<< *arr + 1 << endl; 
    cout<< (*arr) + 1 << endl; 
    cout<< (*arr + 1) << endl; 
    cout<< arr[1] << endl; 
    cout<< *arr + 2 << endl; 
    cout<< *(arr + 2) << endl; 
    cout<< arr[2] << endl; 
    cout<< arr[3] << endl;
    cout<< *(arr + 3) << endl<< endl;   //min each case arr is base address
     
    // arr[i] is similar to *(arr + i)  
    // i[arr] == arr[i]
    int i =1;
    cout<< *(arr + i) << endl;
    cout<< arr[i] << endl;
    cout<< i[arr] << endl;
    cout<< *(i + arr) << endl<< endl;  
    //

    int* q= arr + 1;
    cout<< q <<endl;
    cout<< *q <<endl;    // 24
    cout<< *(q+3) << endl;   // segmentation fault
    // arr = arr+2 is wrong but ptr = ptr+2 is right means base address of an array can not be changed ie "constant pointer" but for pointer there is no concept of base address and it can be changed
    return 0;
}