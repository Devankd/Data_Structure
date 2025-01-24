#include <iostream>
using namespace std;

int main()
{   int n=10 , A[10];
     
        
            cout<<"enter n numbers";
            for(int i=0; i<n; i++){
            cin>>A[i];
            }
       
    
    int key=8;
    for(int i=0; i<10;i++)
    {
       if(A[i]==key){
        cout<<i<<"is the position of number";
       }
    }
    return 0;
}