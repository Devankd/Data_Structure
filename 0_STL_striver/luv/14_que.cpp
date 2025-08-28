#include<bits/stdc++.h>
using namespace std;
// Balanced parenthesis

unordered_map<char,int> symbol= {{'[',-1},{']',1},{'(',-2},{')',2}};   // this i best thig i seen
string isBalanced(string t){
    stack<char>st;
    for(char bracket:t){
        if(symbol[bracket]<0){
            st.push(bracket);
        }else{
            if(st.empty()) return "NO";
            char top= st.top();
            if(symbol[top]+symbol[bracket] !=0) return "No";
        }
    }
    if(st.empty()) return "YEs";
    return "No";



}

int main(){
    string s;
    cin>>s;
    

    cout<<isBalanced(s);
}

// input may be (())({}}}{{}) o/p- balanced or not