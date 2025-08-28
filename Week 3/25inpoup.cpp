#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // if you want to access or insert element in vector indexwise then during declaration write it size otherwise it will through error or will not print
    vector<int>v(10);
    v[0]=5;
    cout<<v[0]<<endl;

    //wrong way
    // vector<int>ve;  // if size is not given then this is wrong way
    // ve[0]=7;
    // cout<<ve[0]<<endl;

    //right way
    vector<int>vec;
    vec.push_back(10);
    cout<<vec[0]<<endl;


}