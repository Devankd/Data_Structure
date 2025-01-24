#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// vector of pairs
void printvec(vector<pair<int,int> >v)
{
    cout<<"size: "<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<< v[i].first<<" "<<v[i].second<<endl;   // to print both element of a pair, since v[i] has two value(ie. pair)
    }
    cout<<endl;
}

int main()
{
    //vector of pairs
    vector<pair<int, int> > v = { {1,3},{2,4},{5,6},{8,3}};
    printvec(v);   // printing pair

    vector<pair<int, int> > v1;   // here v1 has pair value 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});   // taking input in pair  // can also use v1.push_back(make_pair(x,y));
    }
    printvec(v1);

}
// 8100831131