#include<iostream>
using namespace std;

void countkey(string& st, int i, int& n,char& key, int& count)
{
    if(i==n)
    {
        return;
    }
    if(st[i]==key)
    {
        count++;
    }
    return  countkey(st, i+1, n, key, count);
}
int main()
{
    string str="devankchandradubey";
    int i=0;
    char key='a';
    int n=str.size();
    int  count=0;
    countkey(str, i, n, key, count);
    cout<<count;
    return 0;
}