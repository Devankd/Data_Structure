#include <iostream>
using namespace std;
// binary search is applied on monotonus array ie. either ascending or decending
// for an array with 1000 element it takes maxm 1000 steps to search an element by linear search but by using binary search that element can be searched in maximum 10 steps
// binary search is a optimised searching algorithm, which provide answer by doing log(n) comparision and here n is size of array
// time complexity is O(log n)

int binarysearch(int ar[],int size,int target)
{
   int start=0,mid;
   int end = size-1;
   
   while(start<= end)
   {
       mid=start-(start-end)/2;
        if(target==ar[mid])
        {//element found
         return mid;
        }
        else if(target>ar[mid])
        {// search in right of mid
            start=mid+1;
        }
        else
        {// search in left of mid 
            end=mid-1;
        }       
   }
   return -1;
}

int main()
{
   int arr[8]={4,5,6,7,8,9,10,34};
   int target=4;
   int size=8;

   int indexOfTarget=binarysearch(arr,size,target);

   if(indexOfTarget==-1)
   {
      cout<<"Target not found "<<endl;
   }
   else{
      cout<<" Target is at "<<indexOfTarget<<" index"<<endl;
   }
   return 0;
   // time complexity =O(log n)
}
void binary_search(int arr[],int size, int key){
   int start=0, end=size-1;
   int mid;
   while(start<=end){
      mid=start - (start-end)/2;
      if(arr[mid]== key)
      {
         cout<<"found";
         return;
      }else if(arr[mid]<key)
      {
         start=mid+1;
      }
      else
      {
         end=mid-1;
      }
   }
}