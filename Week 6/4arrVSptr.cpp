#include<iostream> 
using namespace std;

int main ()
{
    int arr[7];
    int* p= arr;
    cout<< sizeof(arr) <<endl;  // 7*4 => 28 byte (4=> size of integer) // total space taken by arr
    cout<< sizeof(p) << endl;   // 4  (address  is in hexagonal form)   // total space taken by pointer
    cout<< sizeof(*p) << endl;  // 4 byte which is size of an integer 
}