#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   string str="today";
       
   for(int i=0;str[i]!='\0';i++)
   {
      cout<<str[i];    
      str[i]=str[i]-32;    // become capital letter
   }
   cout<<endl;
   cout<<str;  //capital letter
   cout<<endl;
   return 0;
}