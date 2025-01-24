#include<iostream>
#include<string>
using namespace std;

bool checkans(string str,int i, int n, char key)
{
    if(i>=n)
    {
        return false; // for index return -1 and take int at place of boo
    }
    if(str[i]==key)
    {
        return true;  //for index return i 
    }

    return checkans(str, i+1, n, key);
}

int main()
{
    string str= "devankchandradubey";
    int n=str.length();
    char key='r';
    int i=0;
    bool ans= checkans(str,i,n,key);
    
    cout<<"Answer is: "<<ans;
    return 0;

}