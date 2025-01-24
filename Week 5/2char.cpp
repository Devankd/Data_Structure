// every string will terminate with a null character by default
#include <iostream>
using namespace std;
// null character ki ascii value is 0

int main()
{
    char ch[10];
    cin>>ch;
    for(int i=0;i<7;i++)
    {
        cout<<"Index: "<<i<<" value: "<<ch[i]<<endl;
    }
    int value = (int)ch[1];
    cout<<"ascii value of "<<ch[1]<<" is "<<value;
}


