#include<iostream>
#include<vector>
using namespace std;

// input is rotated and shorted
// no duplicate element is allowed
// eg 2,4,6,7,9  rotated become 9,2,4,6,7 once again rotated become 7,9,2,4,6 here 9 is pivote element  ie maxim is known as pivote element

 int pivote(vector<int>ar)
 {
    int s=0;
    int mid,e=ar.size()-1;
    while(s<=e)
    {
        mid=s-(s-e)/2;
        if(s==e)
        {
            return s;
        }
        if(mid+1 <=e && ar[mid]>ar[mid+1])
        {
            return mid;
        }
        if (mid-1 >=s && ar[mid-1]>ar[mid])
        {
            return mid-1;
        }
        if(ar[s]>ar[mid])  // then perform left search
        {
           e= mid-1;
        }
        else               // else perform right search
        {     
            s=mid+1;
        }
    }
    return -1;
 }
int main()
{
    vector<int>arr{9,10,2,4,6,8};
    
    int ans=pivote(arr);

    if(ans==-1)
    {
        cout<<"some error"<<endl;
    }
    else
    cout<<"Answer is "<<arr[ans]<<endl;
    cout<<"Index is "<<ans<<endl;
}