#include<iostream>
using namespace std;

int main()
{
    int a[]={0,0,0,0,1,1,1,1,0,0,1,1,1,0,1};
    int oneNo=0;
    int zeroNo=0;

    for(int i=0; i<15; i++)
    {   // if zero found increment zeroNo
        if(a[i]==0)
           zeroNo++;
        // if one found increment oneNo
        if(a[i]==1)
           {oneNo++;}
    }
    cout<<"number of zeroes "<<zeroNo<<endl;
    cout<<"number of ones "<<oneNo<<endl;
    return 0;
}