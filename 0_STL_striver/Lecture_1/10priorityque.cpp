#include<iostream>
#include<queue>
using namespace std;

//like normal line in mess
// jo phle aya use phle milega

// FIFO- first in first out means jo sbse pahle ayaa wo sbse aage hai aur wo sbse phle bahar nickelega

int main()
{   
    //max heap
    priority_queue<int>max;  // max is just a variable

    //min heap
    priority_queue<int,vector<int>,greater<int>>mini;  // min is just a variable
    max.push(6);
    max.push(8);
    max.push(4);
    max.push(9);

    int n=max.size();
    for(int i=0;i<n;i++)
    {
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;

    mini.push(6);
    mini.push(8);
    mini.push(4);
    mini.push(9);

    int x=mini.size();
    for(int i=0;i<x;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"Khali hai kya bhai "<<mini.empty()<<endl;




    // cout<<"first element "<<q.front()<<endl;
    
    // q.pop();
    // cout<<"first element "<<q.front()<<endl;

    // cout<<"size of queue "<<q.size()<<endl;
    // cout<<"empty or not "<<q.empty()<<endl;  
    // cout<<"First element "<<q.front();

}