#include <iostream>
using namespace std;


void printArray(int array[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void inc(int brr[], int size)
{
    brr[0]=brr[0]+5;
    printArray(brr,size);
}


int main()
{
    int array[10]={5,8};
    int size=2;

    inc(array,size);
    printArray(array,size);
    return 0;
}
// when we pass any array inside a function then that is always pass by refference and means copy will not be created but primary array



