#include <iostream>
using namespace std;

int main()
{
    // int x=10; is similar to       // during declaration int A[10] means 10 elements are in variable A
     int A[8] = {2,6,4,8,5,9,2,3} ; //here 2 is at 0th position , 6 is at 1st position and so on
     cout<<A[3]<<endl;                    // A[3] means element at 3rd position ie. 8 (first is assumed as 0th)
     cout<<A[0]<<endl;

    for(int i=0; i<=7 ; i++)
    {
        cout<<A[i]<<endl;
    }

    for(int x : A)     // read as for each x in A ('for each' loop)  //also can be written as for(auto x:A)
    {
        cout<<x;
    }
    return 0;     // A[] = {4,5,3,2,6,3}     here size will automatically be 6
}                 //A[5] = {3,5}  here first two elements are 3 & 5 and other three are 0,0,0

  // float A[5] = {2.3, 4.5 ,3.2,6.4,8.2}
  // char A[5] = {'c', 'D', 'a','e', 'w'}