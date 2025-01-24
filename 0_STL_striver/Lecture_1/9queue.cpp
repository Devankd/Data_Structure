#include<iostream>
#include<queue>
using namespace std;

//like normal line in mess
// jo phle aya use phle milega

// FIFO- first in first out means jo sbse pahle ayaa wo sbse aage hai aur wo sbse phle bahar nickelega

int main()
{
    queue<string>q;
    q.push("Devank");
    q.push("Chandra");
    q.push("Dubey");
    q.push("Raipur");

    cout<<"first element "<<q.front()<<endl;
    
    q.pop();
    cout<<"first element "<<q.front()<<endl;

    cout<<"size of queue "<<q.size()<<endl;
    cout<<"empty or not "<<q.empty()<<endl;  
    cout<<"First element "<<q.front();

}