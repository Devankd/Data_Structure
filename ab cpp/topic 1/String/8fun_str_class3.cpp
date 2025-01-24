//s.copy(char des[]), s.find(str) or char, s.rfind(str), s.find_first_of(), s.find_last_of(), s.pop_back(),s1.swap(s2)

#include<iostream>
#include<string>

using namespace std;

int main()
{    //s.copy(char des[])   
    string str="Hello";
    char s[10];
    str.copy(s,str.length());

    cout<<s<<endl;   //this will copy whole length Hello from sts to s.

    char S[10];
    str.copy(S,3);       // will copy Hel only and for will take some garbage value
    S[3]='\0';           // this will give null at index 3
    cout<<S<<endl;

    return 0;
}