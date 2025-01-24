#include<iostream>
#include<stack>
using namespace std;

// LIFO - 

//CPPReference- stack
//in stl stack is implemented using queue internally

int main()
{
    // stack<int> st;
    stack<int>st;
    // to insert a element on top. don't use push_back.
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(6);
    st.push(8);
    
    //remove one element on top
    st.pop();
    
    // return element on top
    cout<<"Element on top is "<<st.top()<<endl;

    //size
    cout<<"size of st is: "<<st.size()<<endl;

    // check wether empty or not
    if(st.empty())
        {cout<<"stack is empty."<<endl;}
    else
        {cout<<"stack is not empty"<<endl;}    


}