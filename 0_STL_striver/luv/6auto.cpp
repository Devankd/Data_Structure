#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,3,4,6,7};
     
   

    // printing iterator method

   //  vector<int> :: iterator it;     // no need of this duee to auto

    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout<< (*it)<<" ";
    }
    cout<<endl;

    // pair
     vector<pair<int,int> > v_p = {{1,2},{2,3}};
    for(/*pair<int,int>*/ auto &value :v_p )    // auto will automatically determine that v_p is pair of vector            // (pair<int,int> value : v_p) is also right 
    {
        cout<< value.first << " "<< value.second<<endl;
    }

    // random variable

    auto a=2.50;
    cout<<endl<<a;
}    