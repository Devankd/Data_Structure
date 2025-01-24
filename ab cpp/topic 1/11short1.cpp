#include <iostream>
using namespace std;
int main(){
    int a=10, b=5,i=5;
    if(a>b && ++i<=b)
    {
     cout<<"good"<<endl;
    }
    cout<<i<<endl;   // 6
    return 0;
    
}