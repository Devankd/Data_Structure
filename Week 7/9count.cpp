#include<iostream>
#include<string>

using namespace std;

void iscount(string& str, int& n, char& key, int i, int& count)
{
    if(i>=n)
    {
        return;
    }
    if(str[i]==key)
    {
        count++;
    }

    return iscount(str, n, key, i+1, count);
    
}

int main()
{
    string str= "Devankchandradubey";
    int n=str.size();
    char key='a';
    int count=0;
    int i=0;
    iscount(str, n, key, i, count);
    cout<<count;
    return 0;
}
