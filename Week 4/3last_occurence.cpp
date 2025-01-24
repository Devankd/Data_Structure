#include <iostream>
#include<vector>
using namespace std;


int lastOccurence(vector<int>ve, int target)
{
   int start=0,mid;
   int end = ve.size()-1;
   int ans =-1;  // here given value of index = 
   
   while(start<= end)
   {
       mid=start-(start-end)/2;
        if(target==ve[mid])
        {//store element
           ans=mid;
           //search in left
           start=mid+1;

        }
        else if(target>ve[mid])
        {// search in right of mid
            start=mid+1;
        }
        else
        {// search in left of mid 
            end=mid-1;
        }       
   }
   return ans;
}

int main()
{
   vector<int>v{1,3,3,3,3,3,4,4,4,4,4,6,7};
   int target =4;

   int indexOfLastOcc=lastOccurence(v,target);

   cout<<"Ans is "<<indexOfLastOcc<<endl;  // this will print last index of occurence of 4 which is 6

  return 0;   
  // time complexity =O(log n) 
}