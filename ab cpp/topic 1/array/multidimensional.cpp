//int A[3][4] means three rows 0,1,2 and 4 columns 0,1,2,3 in form
 /*
      00 01 02 03
      10 11 12 13
      20 21 22 23
 */

#include <iostream>
using namespace std;

int main()
{   int count=1;
    for (int i = 0; i <=2; i++)
    { 
        for(int j=0;j<=2; j++)
        {
            cout<<count<<" ";
            count++;
        }
         cout<<endl;
    }
     return 0;
}