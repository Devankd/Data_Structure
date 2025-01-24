#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>

int main()
{
    vector<int>v{4,5,6,7,8,9};
    
    if(binary_search(v.begin(),v.end(),6))
    {
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}