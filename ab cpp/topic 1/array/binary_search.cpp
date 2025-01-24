#include <iostream>
using namespace std;

int main()
{
    int A[10]={2,4,5,7,9,11,12,13,16,19} ;
    int l=0,h=9,mid,key;
    cout <<"enter key";
    cin>>key;
    while(l<=h)
    {
    mid=(l+h)/2;
    if (key==A[mid])
    {
        cout<<"found at"<<mid;
        return 0;
    }   
    else if(key<A[mid])
    {
       h=mid-1;
    }
    else{
        l=mid+1;
    }
    }
    cout<<"not found";
}