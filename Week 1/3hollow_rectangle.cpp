#include <iostream>
using namespace std;

int main()
{
    int rowCount,colCount,row,col;
    cout<<"Enter the number of row and column ";
    cin>>rowCount>>colCount;

  //Hollow rectangle
    for(row=0;row<rowCount;row++)
    {   //first or last row ->print colCount *
        if(row==0 || row==rowCount-1)
        {
            for(col=0;col<colCount;col++)
            {
            
               {
               cout<<"* ";
               }
            }
        }

        else
        {
            //remaining middle rows
            //first star
            cout<<"* ";
            //space
            for(int i=0;i<colCount-2;i++)
            {
                cout<<"  ";
            }
            //last star
            cout<<"* ";
            //cout<<"* ";
        }
        cout<<endl;

    }
}
 