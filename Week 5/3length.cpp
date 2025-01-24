#include<iostream>
using namespace std;
#include<string.h>


int get_length(char name[])
{
  int length=0;
  int i=0;
  while(name[i]!='\0')  // 0 denotes null char
  {
    length++;
    i++;
  }
  return length;
}

int main()
{
    char name[200];
    cin>>name;

    cout<<"length of name is "<<get_length(name) << endl;

    cout<<"length is: "<<strlen(name);   // it is predefined function
}