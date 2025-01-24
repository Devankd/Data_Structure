#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int a[]={8,4,3,5,9,22,6,9,0,3,7,55,8};
    //minimum possible integer value

    int maxNo=INT_MIN;   // initialise max with minimum value(INT_MIN= -2^31)
                          // initialise min with max number(INT_MAX= 2^31) and then proceed
    


    for(int i=0; i<13; i++)
    {
        if(a[i]>maxNo)
        {   // found greaterb than maxNo, update maxi
            maxNo=a[i];
        }
    }
    cout<<"Maximum number is "<<maxNo<<endl;
    return 0;
}