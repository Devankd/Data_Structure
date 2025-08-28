// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
// map stores key in sorted order 
// map is by default ordered map. 
// unordered map do not store keys in sorted manner, it stores as given 
// map has unique key
// time complexity of inserting any value is log(n)
// time complexity of accessing any value is log(n)

void print(map<int, int> &m)
{
    cout<<"Size : "<<m.size()<<endl;
    for(auto value : m)
    {
        
        cout<<value.first<<" "<< value.second<<endl;
    }
}
int main()
{
    map<int,int> m;
    m[6];          //T.C=O{log(n)},  it takes the space even if we do not give any value
    print(m);  //m[6] will store with 0 (default value) // for int, double, float default value is 0 & for string empty string will be stored if you will not provide any value
    m[10] ;        // time complexity= O(log(n)), means even on writing m[10] without giving any value , its time complexity becomes O(log(n)) and M[10] got inserted with key= 10 and value =0

 
    m[2]=1;
    m[3]=7;
    m[9]=8;
    m[3]=10;  // m[3] = 7 got deleted and 10 added. key should be unique
    print(m);
    cout<<endl;
    
    // m.find() :- it is to find any  element in map and m.find() returns an iterator 
    auto it = m.find(2);  // O(log(n))  // if 2 is no in the map then it will store m.end()
    if(it == m.end() )
    {
        cout<<"No value";
    }
    else{
        cout<< (*it).first << " "<< (*it).second;
    }
    // erase 
    m.erase(2);    //log(n)  // erase operate on key and on operator
    auto itt = m.find(3);
    if(it !=m.end()){
        m.erase(itt);
    }
    print(m);
    m.clear();  //clears map
    print(m);

    //map<string,string>m; time complexity of insertion depends on key generally log(n)  where n=size of map. but when size of key is more then time comple= key.size()*log(n)

}
