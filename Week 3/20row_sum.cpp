#include<iostream>
using namespace std;

void  printRowSum(int arr[][4], int row,int column)
{
   for(int i=0;i<row;i++)
    {    
         int sum=0;
        for(int j=0;j<column;j++)
        {
           sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
}
//  column_sum, colsum of col 1 == sum of all element in column 1 
// void  printcolSum(int arr[][4], int row,int column)
// {
//    for(int i=0;i<column;i++)
//     {    
//          int sum=0;
//         for(int j=0;j<row;j++)
//         {
//            sum=sum+arr[j][i];
//         }
//         cout<<sum<<" ";
//     }
// }

int main()
{
    int arr[3][4]={{4,5,6,7},{9,2,5,8},{8,3,2,7}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int row,column;
    printRowSum(arr, 3,4);
}

