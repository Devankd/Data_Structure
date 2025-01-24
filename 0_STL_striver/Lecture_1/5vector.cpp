#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v;
    cout<<" Capacity "<<v.capacity()<<endl;  

    v.push_back(1);
    cout<<"capacity "<<v.capacity()<<endl;
       
    v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;

    cout<<" at index 2 is "<< v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    // before pop back
    for(int i:v)
    {
         cout<<i<<" ";
    }
    cout << endl;
     
    v.pop_back();  // pop_back means removing last element

    // after pop back
        for(int i:v)
    {
         cout<<i<<" ";
    }
    cout << endl;
    
    cout<< "size is "<< v.size()<<endl;
    v.clear();
    cout<< "size is "<< v.size()<<endl;

    vector<int>a(4,7);  // 4 is number of memory location or size of vector and 7 is the value on each location
    cout<<"Print a "<<endl;
    for(int i:a)
    {
         cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int>b(a);      // here a new vector "b" is created and value of "a" is coppied in "b"
    cout<<"Print b"<<endl;
    for(int i:b)
    {
         cout<<i<<" ";
    }
    







}