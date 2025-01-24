#include <iostream>
using namespace std;
// for pattern generally two nested loops are required and outer loop represents row and inner loop denote columns 
int main()
{
    int rowCount,colCount,row,col;
    cout<<"Enter the number of row and column ";
    cin>>rowCount>>colCount;

  //Hollow rectangle
    // for(row=0;row<rowCount;row++)
    // {   //first or last row ->print colCount *
    //         for(col=0;col<colCount;col++)
    //         {
    //             if(row==0 || row==rowCount-1 || col==0 || col== colCount-1)
    //             cout<<"* ";
    //             else
    //             cout<<"  ";
    //         }
    //         cout<<endl;
    // }


// alternate code
for(int i=0; i<rowCount;i++)
{
  for(int j=0; j<colCount; j++)
  {
    if(i==0 || i== rowCount-1 || j==0 || j== colCount-1)
    {
      cout<<"* ";
    }
    else{ cout<<"  ";}
  }
  cout<<endl;
}
 
}
