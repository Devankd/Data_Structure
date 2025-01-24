#include<iostream>
#include<string>
using namespace std;

string removeOccurence(string s, string part)
{
    int pos= s.find(part);   // pos is the index from where "part" string start in string "s" 
    while(pos != string::npos )  // npos tells that the string (part), which you are searching in base string(s), is not present in base string (s)
    {
        s.erase(pos, part.length());  // erase "part" from "s"
        pos=s.find(part);             // now update the index ie. pos
    }
    return s;
}

int main()
{
    string str;
    getline(cin,str);
    string part;
    getline(cin,part);

    cout<<removeOccurence(str,part);
}