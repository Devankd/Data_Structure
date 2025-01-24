#include<iostream>
using namespace std;

bool  find_key(int arr[][4], int row,int column,int key)
{
   for(int i=0;i<row;i++)
    {    
        for(int j=0;j<column;j++)
        {
            int element=arr[i][j];
            if(element==key){
                return true;
            }
        }    
    }
    // key not present
    return false;
}


int main()
{
    int arr[3][4]={{4,5,6,7},{9,2,5,8},{8,3,2,7}};
    
    int key=5;
    int row,column;
    cout<<find_key(arr, 3,4,key);
    
}
