#include<iostream>
#include<string>
using namespace std;

string removeDupicates(string s)
{
     string ans="";   // take ans as null/empty string
     int i=0;

     while(i < s.length())
     {
        if((ans.length() >0))   // for checking whether ans is valid string or not
        {
            if(ans[ans.length()-1] == s[i])
            {
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
            i++;
        }
     }
     return ans;
}

int main()
{
    string str;
    getline(cin,str);

    cout<<removeDupicates(str);
}