#include<iostream>
using namespace std;

void printcountingHead(int n)
{
    // base case
    if(n == 0)
    return;

    // recursive relation
    printcountingHead(n-1);
    //processing
    cout << n <<" ";
}

void printcountingTail(int n)
{
    // base case
    if(n == 0)
    return;

    //processing
    cout << n <<" ";

    // recursive relation
    printcountingTail(n-1);
    
}

int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>> n;

    printcountingHead(n);
    cout<<endl;
    printcountingTail(n);
    
    return 0;
}