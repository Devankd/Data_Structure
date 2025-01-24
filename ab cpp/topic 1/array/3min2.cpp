#include <iostream>
using namespace std;

int main()
{
    int A[10]={-2,-4,-6,-8,-12,-3,-5,-7,-9,-11};
    int min= INT8_MAX;
    for (auto x:A)
    {
        if(x<min)
        min=x;
    }
    cout<<"minimum number is "<<min;
    
    return 0;
}