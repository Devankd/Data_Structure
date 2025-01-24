#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   string str="today";
   string::reverse_iterator it;
   for(it=str.rbegin();it!=str.rend();it++)    // donot write it--, 
   {
      cout<<*it;     // it act as pointer so here dereference
   }
   cout<<endl;
   return 0;
}