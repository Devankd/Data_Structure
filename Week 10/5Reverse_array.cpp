#include<iostream>
#include<stack>
using namespace std;

// leetcode 344- reverse string
int main()
{
    char n[]= {'h','e','l','l','o'};
    stack<char> st;
    for(int i=0; i<5;i++ )
    {
        st.push(n[i]);
    }
    int i=0;
    while(!st.empty())
    {
        n[i]=st.top();
        st.pop();
        i++;
    }
    for(i=0;i<5;i++)
    {
        cout<<n[i]<<" ";
    }
}

/*
class Solution {
public:
    void reverseString(vector<char>& s) {
        // using stack
        stack<char>st;

        for(int i=0; i<s.size();i++)
        {
            st.push(s[i]);
        }
        
        int i=0;
        while(!st.empty())
        {
            s[i]=st.top();
            i++;
            st.pop();
        }
        
    }
};
*/