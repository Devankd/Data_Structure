#include <iostream>
using namespace std;

int main()
{
    int A[2][3];
    for(auto& x:A)       //here auto is data type which is use for any data type ie int char etc
    {                    //& denotes referance
        for(auto& y:x)
        {
            cin>>y;
        }
        cout<<endl;
    }

    for(auto& x:A)       
    {                     
        for(auto& y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}