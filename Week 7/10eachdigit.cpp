#include<iostream>
using namespace std;

void printdigits(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    //baki recursion sambhal lega
    printdigits(n/10);
    
    //1 case mai solve karunga
    cout<< n%10<<" ";
}

int main()
{
    int n=5893;
    printdigits(n);
}