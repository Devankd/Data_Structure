#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], mult[10][10], r1,c1,r2,c2,i,j,k;
    
    cout<<"enter the number of row and column of matrix A ";
    cin>>r1>>c1;
    cout<<"enter the number of row and column of matrix B ";
    cin>>r2>>c2;

    if(c1!=r2)
    {
        cout<<"Both matrices cant be multiplied";
    }
    else
    //taking input in A

    for( i=0;i<r1;i++)
    {

        for( j=0; j<c1;j++)
        {
            cout<<"Enter the element a"<<i+1<<j+1<<" ";
            cin>>A[i][j];
        }
    }

    //taking input in B

    
    for(i=0;i<r2;i++)
    {
        for(j=0; j<c2;j++)
        {
            cout<<"Enter the element b"<<i+1<<j+1<<" ";
            cin>>B[i][j];
        }
    }

    //multipling A & B

    
    for(i=0;i<r1;i++)
    {
        for(j=0; j<c2;j++)
        { 
            mult[i][j]={};
            for(k=0 ;k<c1;k++)
            {
                mult[i][j] += A[i][k]*B[k][j];
            }
             
        }
    }

    //displaying multiplication

    
    for(i=0;i<r1;i++)
    {
        for(j=0; j<c2;j++)
        {
            cout<<" "<<mult[i][j];     
        }
        cout<<endl;
    } 
}
 