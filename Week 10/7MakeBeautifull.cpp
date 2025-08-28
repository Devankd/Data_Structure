//gfg - https://www.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1

#include<iostream>
#include<stack>
#include<vector>
using namespace std;


class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>temp;
        for(int i=0;i<arr.size();i++){
            // stack can be empty
            if(temp.empty()){
                temp.push(arr[i]);
            }
            // non negative
            else if(arr[i]>=0){
                //non negative
                if(temp.top()>=0){
                    temp.push(arr[i]);
                }
                // negative
                else{
                   temp.pop();
                }
            }
            //negative
            else{
                //negative
                if(temp.top()<0){
                    temp.push(arr[i]);
                }
                // positive
                else{
                   temp.pop();
                }
            }
        }
        
        vector<int>ans(temp.size());
        int i= temp.size()-1;
        while(!temp.empty()){
            ans[i]=temp.top();
            i--;
            temp.pop();
        }
        return ans;
        
    }
};