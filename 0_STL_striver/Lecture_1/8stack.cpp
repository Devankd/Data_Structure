#include<iostream>
#include<stack>
using namespace std;

// like a box of cartoon filled with book. 
// jo book sbse last me dala tha wo sbse upper hoga

// LIFO- last in first out means jo sbse last me dala wo sbse uper hai aur wo sbse phle bahar nickelega

int main()
{
    stack<string>s;
    s.push("Devank");
    s.push("Chandra");
    s.push("Dubey");

    cout<<"Top element "<<s.top()<<endl;
    
    s.pop();   // removes last element
    cout<<"Top element "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty()<<endl;  // replies in bool that that stack s is empty or not. 0 means not empty, 1 means empty
    cout<<"Top element "<<s.top();

}