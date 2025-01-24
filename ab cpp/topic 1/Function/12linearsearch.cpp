#include <iostream>
using namespace std;

int search(int a[],int key, int n)
{
    for(int i=0;i<n;i++)
    {
       if(a[i]==key)
       {
        cout<<i;
       }
    }
    
}

int main()
{
    int a[8]={4,5,6,7,2,9,2,3};
    search(a,7,8);
}