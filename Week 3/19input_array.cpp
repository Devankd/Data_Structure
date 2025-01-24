#include<iostream>
using namespace std;

int main()
{
    int A[2][3];
    int rows=2;
    int column=3;

    // taking input row wise
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }

     //printing row wise
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
     

     // taking input column wise
    //   for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<column;j++)
    //     {
    //         cin>>A[j][i];
    //     }
    //     cout<<endl;
    // }

     //printing row wise
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<column;j++)
    //     {
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}