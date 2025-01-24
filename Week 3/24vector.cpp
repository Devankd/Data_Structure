#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int row=3;
    int col=4;
    vector<vector<int> >arr(row,vector<int>(col,6));  // it will form an 2d array with 3 row 4 column and each element will become 6

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)         
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<arr[0][3];
    // number of row=arr.size();
   // number of column=arr[i].size(); 

}