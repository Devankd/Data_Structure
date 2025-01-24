#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[100]= {6,3,7,2,8};
    int n= 5;
    
    for( int i=n-2; i>=0; i--)
    {
        bool swapped = 0;
        for(int j=0; j<=i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swapped=1;
                swap(arr[j], arr[j+1]);
            }    
        }
        if(swapped == 0)
        break;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

