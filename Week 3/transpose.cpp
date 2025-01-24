#include<iostream>
using namespace std;

void transpose(int arr[][4], int row,int column,int trr[][3])
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

  void printArray(int brr[][4],int row,int col )
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
    int arr[3][4]={{4,5,6,7},{9,2,5,8},{8,3,2,7}};
    
    int trr[4][3];
    
    
    printArray(arr,3,4);

    transpose(arr,3,4,trr);
    

    printArray(,4,3);
    
}