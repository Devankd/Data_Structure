// first container - array

#include <bits/stdc++.h>
using namespace std;

int main()
{ 
   array<int,3>brr;   // arrray of name brr and having 3 indices and garbage value inside of it
   array<int , 5>crr ={8,9};   // {8,9,0,0,0}

   array<int,6>arr;
   arr.fill(10);    // {10,10,10,10,10,10}\

   //arr.at(index)

   for(int i=0;i<6;i++)
   {
     cout<<arr.at(i)<<" ";  // 10 10 10 10 10 10

   }
   cout<<endl;

   // iterators  - begin(),rbegin,end(),rend()
   // begin()-points to first element of array
   // reverse begin()- points to last memory location of array
   // end()- points to memory location just after last element of array (empty location )
   // rend()- points to the memory location just before first element
 
   array<int ,5>arrr={2,3,4,5,6};
   for(auto it= arrr.begin(); it!= arrr.end(); it++)
   {
       cout<<*it<<" ";
   }
   cout<<endl;
    
   for(auto it: arrr)
   {
     cout<<it<<" ";
   } 
   cout<<endl;

   for(auto it= arrr.rbegin(); it!=arrr.rend(); it++)
   {
      cout<<*it;
   }
  
  cout<< endl;

  for(auto it= arrr.end()-1; it>=arrr.begin(); it--)
   {
      cout<<*it;
   }

   cout<<endl;
    
  //  for(auto it arrr;)
  //  {
  //    cout<<it<<" ";
  //  } 
  }



