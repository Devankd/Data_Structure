#include<iostream>
using namespace std;

void update(int* a, int* b)
{
    *a=100;
    *b=400;
}
int main()
{
    int arr[4]= {10,20,50,80};

    int* p= &arr[1];
    int* q= &arr[2];

    update(p,q);

    for(int i=0 ; i<4; i++)
    {
        cout<<arr[i]<<" ";
    }

    
}