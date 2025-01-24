#include<iostream>
#include<string>
#include <vector>
using namespace std;

// first store then print
void printsubsequence(string str, string output,int i, vector<string>&v)
{
    if(i>= str.length())
    {
        // cout<<output<<" ";
        v.push_back(output);
        return;
    }

    //exclude
    printsubsequence(str,output,i+1, v);

    //include
    output=output+str[i];              // output.push_back(str[i]); also can be used  // concatenation
    printsubsequence(str, output,i+1,v);
}

int main()
{
    string str="abc";
    string output="";
    int i=0;
    vector<string>v;
    printsubsequence(str,output,i,v);
    for(auto val: v)
    {
        cout<<val<<" ";
    }
    return 0;
}