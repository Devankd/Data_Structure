#include<bits/stdc++.h>
using namespace std;

// in map, sets there is no indexing so to access that values we use iterators
// it helps to access, change value of container
// iterator is like pointer which points to element
int main()
{
    vector<int>V{3,6,8,5,4};
    // printing normally
    for(int i=0; i<V.size(); i++)
    {
        cout<< V[i] <<" ";
    }
    cout<<endl;

    // iterators

    vector<int> ::iterator it = V.begin();   
    cout<< (*(it+1)) << endl;   // dereferencing ie printing second element of v = 6

    
    for( it = V.begin(); it != V.end(); it++)
    {
        cout << (*it) << endl;
    }

    
    // .begin()- first element/ 0th index
    // .end() - just after last element / next to last element

    cout<<endl;
    it++; // always used
    it + 1; // not used


    // because it++ denotes next location for all like array, sets, map etc
    // it + 1 denotes lext location only in array, vectoretc but  it is invalid location for map, sets
    
    vector< pair<int,int> > v_p = {{1,2},{2,3}, {3,4}};
    vector<pair<int,int> > :: iterator ite;

    // printing pair using iterator

    for(ite = v_p.begin(); ite != v_p.end(); ite++)
    {
       cout<< (*ite).first <<" "<< (*ite).second << endl;
    }
    
    cout<<endl;
    
    for(ite = v_p.begin(); ite != v_p.end(); ite++)
    {
       cout<< (ite->first) <<" "<< (ite->second) << endl;
    }
    // (*it).first <=> (it->first)


 }