// leetcode - 921 and 20

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            st.push(s[i]);
            else{
                if(st.empty())
                count++;
                else
                st.pop();
        }
        }
        return count+st.size();
    }
};