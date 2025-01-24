#include<iostream>
using namespace std;

void transpose(int arr[][3], int row,int column,int trr[][3])
{
   for(int i=0;i<row;i++)
    {    
        for(int j=0;j<column;j++)
        {
            int element=arr[i][j];

            trr[j][i]=arr[i][j];  
        }    
    }
}

  void printArray(int brr[][3],int row,int col )
  { for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
  }


int main()
{
    int arr[3][3]={{4,5,6},{9,2,5},{8,3,2}};
    
    int trr[3][3];
    
    
    printArray(arr,3,3);

    transpose(arr,3,3,trr);

    printArray(trr,3,3);
    
}