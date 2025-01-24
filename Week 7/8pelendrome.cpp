#include<iostream>
using namespace std;

// check pelendrom or not
bool checkPal(string str, int start, int end)
{
    if (start>=end)
    return 1;
    
    if(str[start]!=str[end])
    return 0;

    return checkPal(str , start+1, end-1);
} 
//count vowels

int countvol(string str, int index)  // index = n
{
    //base
    if (index==-1)
    return 0;
    //count
    if (str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' ||str[index]=='u')
    return 1+ countvol(str, index-1);
    else
    return countvol(str, index-1);  
}

// reverse a string
void rev(string &str, int start, int end)  // reference is only here to save changes in memory but donot write & or * in int main() function
{
    //base case
    if(start>=end)
    return;

    char c;
    c=str[start];
    str[start]=str[end];
    str[end]=c;

    return rev(str, start+1, end-1);
}
//lower to uppercase

void LowertoUpper(string str, int index)
{
    //base case
    if(index==-1)
    return ;

    str[index]='A'+str[index]-'a';
    return LowertoUpper(str, index-1);
}
