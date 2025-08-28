#include<bits/stdc++.h>
using namespace std;

// Given N strings, print unique string in lexiographical order with their frequency


int main(){
    vector<string> s={"gfh","yyt","ryt","uyu","dfg","gfh","gfh","yyt"};
    map<string,int>m;
    for(auto &it:s){
        m[it]++;    //it is key for first time m[itt] value is zero, then value increased by one
    }

    for(auto itt:m){
        cout<<itt.first<<" "<<itt.second<<endl;
    }
}