//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int fun(int n, int p, int m)
	{
	    int ans=1;
        
	    while(n--)
	    {
	        ans=ans*m;
            if(ans>m){
                return ans;
            }
	    }
	    return ans;
	    
	}
	int NthRoot(int n, int m)
	{
	    int start=0;
	    int end= m;
	    int mid;
	    while(start<=end)
	    {
	        mid=start-(start-end)/2;
	        if(fun(n,mid,m)==m)
	        {
	            return mid;
	        }
	        else if(fun(n,mid,m)<m)
	        {
	            start=mid+1;
	        }
	        else if(fun(n,mid,m)>m)
	        {
	            end= mid-1;
	        }
	    }
	    return -1;
	    
	}  
};

//{ Driver Code Starts.
int main(){
	
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	
	return 0;
}