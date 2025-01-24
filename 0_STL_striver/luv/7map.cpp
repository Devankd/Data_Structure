#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    cout<<"Size of map: "<<m.size()<<endl;
    for(auto &pr : m)      // O(nlog(n)) // n for 'for' loop log(n) for accessing
   {
        cout<< pr.first <<" "<< pr.second<<endl;
    }
}


int main()
{

    // map is a data structure which store key value pair
   
    map<int, string > m; // int is key  and string is value
    m[1] = "abc";   // time complexity= O(log(n))  , time complexity to insert value in map is O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[5] = "zzz"; // map store unique key, so m[5] will be updated as "zzz" & "cdc" will become meaningless


     // 2nd way to take input
    m.insert({4, "afg"});
    
    // printing 
    map<int, string> :: iterator it;

    for(it = m.begin(); it != m.end(); it++)
    {
        cout<< (*it).first <<" "<< (*it).second<< endl;
    }
    cout<<endl;

    // shortcut printing

    cout<<"Size of map: "<<m.size()<<endl;
    for(auto &pr : m)   // here & is used to not create copy each time which save space ie more optimised code  // for(auto pr : m){cout<< pr.first <<" "<< pr.second<<endl;}  => this will also print same thing 
    {
        cout<< pr.first <<" "<< pr.second<<endl;
    }
    cout<<endl;

    // printing using function
    print(m);     // printing by using function
    


}
