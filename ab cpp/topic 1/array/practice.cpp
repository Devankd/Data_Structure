#include<iostream>
using namespace std;
int main()
{
    int A[1000][1000],B[1000][1000],c[100][100],r1,c1,r2,c2;
    cin>>r1>>c1;
    cin>>r2>>c2;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
               cin>>A[i][j]; 
        }
        cout<<endl;
        
    }
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
               cin>>A[i][j]; 
        }
        cout<<endl;
        
    }
    if(r1==r2 && c1==c2)
    {
       for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
           c[i][j] = A[i][j]+B[i][j];
           cout<<c[i][j];
             
        }
        cout<<endl;
        
    }
    }
     

    return 0;
}