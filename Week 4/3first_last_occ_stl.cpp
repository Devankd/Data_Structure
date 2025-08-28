#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v{1,3,3,3,3,3,4,4,4,4,4,6,7};
    int target=4;
    
    auto firstocc=lower_bound(v.begin(),v.end(),4);  // this will return some value of memory location of first 4 in form of 3006 etc. 

    cout<< "index of first occurence is "<<(firstocc-v.begin())<<endl;   // it means index number of firstocc
    // 4034-4030=1 which denote number of digit
     
    auto lastocc=upper_bound(v.begin(),v.end(),4); 
    cout<< "index of last occurence is "<<(lastocc-v.begin())<<endl;

    int total_occ= lastocc-firstocc+1;
    cout<<"Total occurence is "<<total_occ<<endl;
    return 0;
    
}