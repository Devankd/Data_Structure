#include<iostream>
using namespace std;

void solid_rectangle(int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {   
            if(i==0||i==n-1||j==0||j==m-1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return;

}

int main()
{
  /*  int rowCount,colCount;
    cin>>rowCount>>colCount;

    for(int row=0; row<rowCount; row=row+1)  // outer loop act as row and in each row colcount number of * are getting printed
    {
        for(int col=0 ; col<colCount ; col=col+1)  // inner loop act as column 
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    */
    
    solid_rectangle(6,7);
    return 0;
}

