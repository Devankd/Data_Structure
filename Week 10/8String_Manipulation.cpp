// gfg -https://www.geeksforgeeks.org/problems/string-manipulation3706/1?page=1&difficulty%5B%5D=0&category%5B%5D=Stack&sortBy=submissions

#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        stack<string>temp;
        for(int i=0; i<arr.size();i++){
            if(temp.empty())
            temp.push(arr[i]);
            else{
                if(temp.top()==arr[i]){
                    temp.pop();
                }
                else
                temp.push(arr[i]);
            }
        }
        return temp.size();
    }
};