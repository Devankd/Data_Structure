#include<iostream>
#include<vector>
using namespace std;

// if position of element is given in 2d (i,j) form then to form in 1d(ie. m), m=col*i+j 
// if given in 1d(m) then 2d(i,j) , i=m/col & j=m%col    
// here col is total number of columns in that array

bool binarySearch(int arr[][4], int rows,int cols,int target)
{
    int mid, s=0;
    int e=rows*cols-1;
    while(s<=e)
    {
        mid=s-(s-e)/2;
        int rowIndex=mid/cols;
        int colIndex=mid%cols;
        if(arr[rowIndex][colIndex]==target)
        {
            cout<<"Found at "<<rowIndex<<" "<<colIndex<<endl;
            return true; 
        }
        else if(arr[rowIndex][colIndex]<target)
        {
            s=mid+1; 
        }
        else{
            e=mid-1;
        }
    }
    return false;
}

int main()
{
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

    int row=5;
    int col=4;
    
    int target=19;

    bool ans=binarySearch(arr,row,col,target);

    if(ans){
        cout<<target<<" is present "<<endl;
    }
    else
    {
        cout<<target<<" is not present "<<endl;
    }

    
}