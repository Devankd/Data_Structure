#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <=5; i++)
    { 
        for(int j=0;j<=i; j++)
        {
            cout<<"* ";
        }
         cout<<endl;
    }
    cout<<"\n \n \n \n \n";


     for (int i = 0; i <=2; i++)
    { 
        for(int j=0;j<=2; j++)
        {   if(i<=j)
            cout<<"* ";
        }
         cout<<endl;
    }
     return 0;
}

 