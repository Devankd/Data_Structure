#include<iostream>
#include<deque>
using namespace std;

int main()
{   // in vector we can exess element from one end only but in deque can access & put element from both ends
    deque<int>d;
    d.push_back(4);
    d.push_front(8);

    cout<<"first element is "<<d.at(1)<<endl;
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    cout<<"empty or not "<<d.empty()<<endl;  // 0 means not empty, 1 means empty
    
    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); // erasing element from begin and less than begin+1 ie. one element
    cout<<"after erase "<<d.size()<<endl;
    for(int i:d)
    { cout<<i;}

}