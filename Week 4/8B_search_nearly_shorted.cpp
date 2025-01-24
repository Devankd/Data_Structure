#include <iostream>
using namespace std;
#include<vector>

int binarySearch(vector<int>ar,int target)
{
   int start=0,mid;
   int end = ar.size()-1;
   
   while(start<= end)
   {
       mid=start-(start-end)/2;

        if(target==ar[mid])
        {//element found
         return mid;
        }
       if(mid-1>=0 && ar[mid-1]==target)  // mid-1>=start, this is more optimised code
        {
            return (mid -1);
        }
        if(mid+1<ar.size() && ar[mid+1]==target)  // mid+1<=end  , this is more optimised than mid+1<ar.size()
        {
            return (mid +1);
        }

         if(target>ar[mid])
        {// search in right of mid
            start=mid+2;  // +2 is here at place of +1 because above it has already searched in 1 agal & bagal of mid
        }
        else
        {// search in left of mid 
            end=mid-2;
        }       
   }
   return -1;
}

int main()
{
   vector<int>ar{10,3,40,20,50,80,70};
   int target=50;
   
   int ans=binarySearch(ar,target);
   cout<<"Index of "<<target<<" is "<<ans<<endl;
   return 0; 
}