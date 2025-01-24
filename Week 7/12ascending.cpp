#include<iostream>
#include<vector>

using namespace std;


bool isSort(vector<int>&v,int i,int& n)
{   
    if(i == n-1)
    {
        return true;
    }
   if(v[i]<v[i+1]) 
   {
       return  isSort(v, i+1 , n);
   }
   else 
   {
      return false;
   }
}

int main()
{
    vector<int>v{2,7,4,9,3,5,5,8,1,6};
    int i=0;
    int n= v.size();

    bool ans = isSort(v, i, n);
    if(ans)
    {
      cout<< "Sorted";
    }
    else
    {
      cout<<"Not Sorted"; 
    }
    return 0;
}