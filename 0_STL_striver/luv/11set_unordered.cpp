#include<bits/stdc++.h>
using namespace std; 
// every time map means ordered_map

// set is same as map but set have only key, it do not have value
// in set unique element is stored in sorted order
// time comple is same as map 
// uses tree as inbuild implementation

void print(set<string> &u){
    // 1st 
    // for(auto it:u){
    //     cout<<it<<endl;
    // }
    // alternate method
    for(auto it= u.begin();it!=u.end();it++){
        cout<<*it<<endl;
    }
}

int main(){
    set<string> s;
    s.insert("gfdh");  // log(n)
    s.insert("abd");   
    s.insert("gdh");
    s.insert("gdh");

    set<int>h = {4,5,9,8};

    auto it = s.find("abd");
    if(it!=s.end()){
        s.erase(it);
    }
    print(s);
}

// given string, print unique string in sorted order - use set

// multiset<int>m; two same key can be stored but in sorted order.every other thing is same as set eg {1,5,3,4,3}, in set- (1,3,4,5), in multiset- (1,3,3,4,5), in unordered_set- (1,5,3,4)
// Multiset can be used at place of priority queue
// priority queue store in sorted order and multiple elements