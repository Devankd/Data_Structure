#include <iostream>
using namespace std;


int main()
{
    int arr[5]={4,5,66,7,8};
    int key, size=5;
    bool flag=0;
    // 0-> not found
    // 1-> found


    cout<<"Enter the key "<<endl;
    cin>>key;
    //linear search
    for(int i=0; i<size;i++)
    {
        if(arr[i]==key)
        {
            //found
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"Present";
    }
    else{cout<<"not present";}
    return 0; 
}
