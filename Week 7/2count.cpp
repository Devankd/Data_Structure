#include<iostream>
using namespace std;

void printcounting(int n)
{
    // base case
    if(n == 0)
    return;

    //processing
    cout << n <<" ";
 
    // recursive relation
    printcounting(n-1);
    
}
int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>> n;

    printcounting(n);
    
    return 0;
}