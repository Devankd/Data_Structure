#include <iostream>
using namespace std;

int main()
{
    int A[10]= {2,3,5,4,6,7,34,2,7,3};
    int sum=0;

    for(int i=0;i<10;i++)
    {
        sum=sum + A[i];
    }
    cout<<sum<<"is sum";
    return 0;
    
}