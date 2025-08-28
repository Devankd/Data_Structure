// leetcode - 844 
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool backspaceCompare(string s, string t) {
            stack<int>st,st1;
            string str1,str2;
    
            for(int i=0;i<s.size();i++){
                if(s[i]=='#' && !st.empty())
                   st.pop();
                else if(s[i]!='#')
                   st.push(s[i]);
            }
            for(int i=0;i<t.size();i++){
                if(t[i]=='#' && !st1.empty())
                   st1.pop();
                   
                else if(t[i]!='#')
                   st1.push(t[i]);
            }
    
            while(!st.empty()){
                str1.push_back(st.top());
                st.pop();
            }
            while(!st1.empty()){
                str2.push_back(st1.top());
                st1.pop();
            }
            return str1==str2;
            
        }
    };