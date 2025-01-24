#include<iostream>
#include<vector>

using namespace std;

int main()
{
   vector<int>arr{1,0,0,0,1,0,1,1,0,1,0,0};
   int i=0;
   int j=arr.size()-1;

   while(i<j)
   {
     int currentLeftElement=arr[i];
     int currentRightElement=arr[j];
     if(currentLeftElement==0)
     {
        i++;
     }
     if(currentRightElement==1)
     {
        j--;
     }
     if( currentLeftElement==1 && currentRightElement==0)
     {
        swap(arr[i],arr[j]);
        i++;
        j--;
     }
   }
   
   for(auto k: arr)
   {
       cout<<k<<" ";
   }

}
