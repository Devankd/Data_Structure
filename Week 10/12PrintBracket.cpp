// gfg - print bracket number

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        vector<int> ans;
        stack<int> st;
        int count=0;
        for(int i=0;i<str.size();i++){
            // opening 
            if(str[i]=='('){
            count++;
            st.push(count);
            ans.push_back(count);
            }
            //closing
            else if(str[i]==')'){
                
                ans.push_back(st.top());
                st.pop();
                
            }
            
        }
        return ans;
    }
};