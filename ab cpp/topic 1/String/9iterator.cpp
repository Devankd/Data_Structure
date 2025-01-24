#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   string str="today";
   string::iterator it;        
   for(it=str.begin();it!=str.end();it++)
   {
      cout<<*it;     // it act as pointer so here dereference
      *it=*it-32;    // become capital letter
   }
   cout<<endl;
   cout<<str;  //capital letter
   cout<<endl;
   return 0;
}