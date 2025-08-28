// gfg -Get mmin on top

#include<bits/stdc++.h>
using namespace std;

stack<int>_push(int arr[],int n);

void _getMinAtPop(stack<int>s);

// } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int>st;
   st.push(arr[0]);
   for(int i=1;i<n; i++){
       st.push(min(st.top(),arr[i]));
   }
   return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
    }
}