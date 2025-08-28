#include<bits/stdc++.h>
using namespace std;

// unordered_set is same as unordered map except it only have key no value
// in this elements are not sorted
// this is used to check if any element is present or not
  // 1)inbuild implementation- (it uses Hash table)(by creating and comparing Hash value of every key )
  // 2)Time complexity - O(1) [average time] for both insertion and access,find,erase.
  // 3)Valid key data type -  unordered_set<pair<int,int>>m; this is wrong becouse hash value of pair can not be find. where as in map comparison is done so comparison between two pairs are possible     
  // 4) it's keys are not sorted 

  //

// Given N strings and r queries, print frequency

int main(){
    vector<string> s={"gfh","yyt","ryt","uyu","dfg","gfh","gfh","yyt"};
    vector<string> r={"gfg","yyt"};
    unordered_set<string>u;
    for(auto &it:s){
        u.insert(it);    //it is key for first time m[itt] value is zero, then value increased by one
    }

    for(auto itt:r){
        if(u.find(itt)==u.end()){
            cout<<"no"<<endl;
        }else {cout<<"yes"<<endl;}
    }
    return 0;
}

