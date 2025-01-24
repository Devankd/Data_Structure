#include<iostream>
#include<string.h>

using namespace std;

void replaceSpace(char sentence[])  // time complexity= O(n)+O(n)=O(n)
{
    int i=0;
    int n=strlen(sentence);   // time complexity= O(n)
    for(int i=0; i<n; i++)    // time complexity= O(n)
    {
        if(sentence[i]==' ')
        {
            sentence[i]='@';  // replace all spaces with @
        }
    }

}


int main()
{
   char sentence[100];
   cin.getline(sentence,100);   // take input without for loop 

   replaceSpace(sentence);

   cout<<"printing sentence: "<<sentence;  // print whole sentence without using for loop which is required in normal array
}