#include <iostream>
using namespace std;

int main()
{
    int A[3][4]={{1,3,5,1},{8,5,1,10},{41,5,3,8}}; // A[3][4]={1,3,5,1,8,5,1,10,41,5,3,8}; is same
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++){
         cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
 }
