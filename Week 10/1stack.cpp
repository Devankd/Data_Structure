#include<iostream>
#include<stack>
using namespace std;

// why stack is introduced? we had array, vector, linked list then why stack 
int main()
{
    stack<int>st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    // stack prints numbers in reverst order of input

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

}