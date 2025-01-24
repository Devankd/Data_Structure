//Generate parenthesis

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void gener_parenthesis(int n, int left, int right, vector<string>&ans, string &temp)
{
   if(left==n && right==n)
   {
      ans.push_back(temp);
      return;
   }
   //left parenthesis '('
   if(left<n)
   {
      temp.push_back('(');
      gener_parenthesis(n,left+1, right,ans,temp);
      temp.pop_back();
   }
   //right parenthesis ')'
   if(right<left)
   {
      temp.push_back(')');
      gener_parenthesis(n,left, right+1,ans,temp);
      temp.pop_back();
   }

}

int main()
{
   int n;
   cin>>n;
   int left=0,right=0;
   vector<string>ans;
   string temp;
   gener_parenthesis(n,left,right,ans,temp);
   
   for(int i=0;i<ans.size();i++)
   {
      cout<<ans[i]<<endl;
   }
   return 0;
}