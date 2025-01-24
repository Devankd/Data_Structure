#include<iostream>
using namespace std;

int main()
{ 
    int row,col;
    int arr[row][col];
    cout<<"Enter the number of rows "<<endl;
    cin>>row;
    cout<<"enter number of column "<<endl;
    cin>>col;

   cout<<"Enter the value of array=";
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
          cin>>arr[i][j];
       }
   }
   return 0; 
}


 
 