#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5>a={2,3,4,6,7};

    int size= a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }
    cout<<endl;

    cout<<"Element at 2nd poosition "<<a.at(1)<<endl;
    cout<<" empty or not "<<a.empty()<<endl;   // boolian answer 0 or 1
    cout<<"first element "<<a.front()<<endl;
    cout<<" last element "<<a.back()<<endl;

}