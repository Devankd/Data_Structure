#include<iostream>
#include<list>
using namespace std;
// it is doubly linked list, to access element we need to travel from one end.
// any element in mid can not be accessed directly.

int main()
{
    list<int>l;
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_front(9);

    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of list "<<l.size()<<endl;

    list<int>a(5,20);
    cout<<"a is "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }cout<<endl;

     list<int>b(a);  //copping all value of a in b
    cout<<"b is "<<endl;
    for(int i:b)
    {
        cout<<i<<" ";
    }
     return 0;
}