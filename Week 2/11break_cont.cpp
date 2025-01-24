#include <iostream>
using namespace std;

int main ()
{
    int i,a=5 ;
    
    //Break  - break means go outside of that loop without executing the code after break; 
    for(i=0; i<a;i++ )
    { 
        cout<<i<<endl;
        break;
    }
    cout<<"Raman"<<endl;
    cout<<i<<endl;
    cout<<"Dubey"<<endl;

    //continue - continue means go on updation and check condition without executing code after continue;

     for(i=0; i<a;i++ )
    { 
        continue;
        cout<<i<<endl;
    }

    cout<<"devank"<<endl;
    cout<<i<<endl;
    cout<<"Dubey"<<endl;
    return 0;


}