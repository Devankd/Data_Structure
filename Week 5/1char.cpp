#include<iostream>
using namespace std;
// char takes 1byte of memory &range of char is from -128 to 127. ie. form -2^7 to 2^7-1
// in unsigned from 0 to 2^8-1
// array is a data structure and int or char is data type
// in char input can be taken in two way 1)taking input in sequence ie. in line 16
//                                       2)taking input index(singly) wise 17
// char always terminates with a null character(\0) &ascaii value of null char is 0
int main()
{
    int arr[10];  // means 10 memory block which will store integer
    char cr[10];  // takes 10 memory blocks to store character 'a', 'A', etc. each block can have single character
    char a[100];
    char b[100];

    cin>>a;     // one way to take input in an char
    cin>>b[2];  //here in char by both way we can take input 
               //but in int only input can be taken only indexwise
    cout<<a<<endl;
    cout<<b[2]<<endl;
}