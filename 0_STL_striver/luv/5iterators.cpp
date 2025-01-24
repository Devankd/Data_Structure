#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,3,4,6,7};
     
    // printing normal method
    for(int i=0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    } 
    cout<<endl;

    // printing iterator method

    vector<int> :: iterator it;     // when using auto then there is no need of this line

    for(it = v.begin(); it != v.end(); it++)
    {
        cout<< (*it)<<" ";
    }
    cout<<endl;

    // printing sortcut method/ range based loop

    for (int value : v)  // elements of v get coppied in value
    {
        cout << value <<" ";
    }
    cout << endl;

    // copy proof
    
    for (int value : v) 
    {
        value++;  // we increased value but original v will remain same because v is coppied into value
    }

    for (int value : v)  
    {
        cout << value <<" ";   // 2,3,4,6,7
    }
    cout << endl;
    
    // proof coppy

     for (int &value : v) 
    {
        value++;         // original v will increase on increasing value, here coppy is not created 
       
    }
    
    for (int value : v)  
    {
        cout << value <<" ";   // 3,4,5,7,8
    }
    cout << endl;

    // for pair 

    vector<pair<int,int> > v_p = {{1,2},{2,3}};
    for(pair<int,int> &value :v_p )             // (pair<int,int> value : v_p) is also right 
    {
        cout<< value.first << " "<< value.second<<endl;
    }
     

}