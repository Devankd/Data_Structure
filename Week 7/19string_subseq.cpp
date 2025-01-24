#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subsequence(string &str, int index,int n, vector<string>&ans,string &temp)
{
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }
    subsequence(str,index+1,n,ans, temp);
    temp.push_back(str[index]);
    subsequence(str,index+1,n,ans, temp);
    temp.pop_back();

}



int main()
{
    string str="abc";
    vector<string>ans;  //final ans to be stored
    string temp;
    int n=str.size();

    subsequence(str, 0, n, ans, temp);

    for(int i=0;i<ans.size();i++ )
    {
        cout<<ans[i]<<endl;
    }
}