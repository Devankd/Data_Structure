#include <iostream>
using namespace std;

int search(int a[],int key, int n)
{
    for(int i=0;i<n;i++)
    {
       if(a[i]==key)
       {
        return i;
       }
    }
    return 0;
    
}

int main()
{
    int a[8]={4,5,6,7,2,9,2,3};
    int key;
    cout<<"element to be searched ";
    cin>>key;
    int index=search(a,7,8);
    cout<<"Element found at index :"<<index<<endl;
    return 0;

}