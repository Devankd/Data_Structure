#include <iostream>
using namespace std;


bool found(int brr[],int size,int key)
{
    //linear search
    for(int i=0; i<size;i++)
    {
        if(brr[i]==key)
        {
            return true;  // if key found then it will return true and do not go to return false.
        }
    }
    return false;    // important- if key not found then it will come outside loop and return false
}

int main()
{
    int arr[5]={4,5,66,7,8};
    int key, size=5;
    cout<<"Enter the key "<<endl;
    cin>>key;

    if(found(arr,size,key))
    {
        cout<<"found";

    }
    else{cout<<"not found";}
    return 0; 
}

