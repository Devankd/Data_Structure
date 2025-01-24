#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

// to convert into uppercase

void convertIntoUppercase(char arr[])    // T.C.= O(n), sc=O(1)
{
   int i=0;
   int n=strlen(arr);
   for(int i=0;i<n;i++)
   { 
     if(arr[i]>='a' && arr[i]<='z')   // to make sure that word is not uppercase
     {
        arr[i]=arr[i]-'a'+'A';   // to convert into uppercase  (su )
     }                          // A- 65, a- 97, difference=32
   }
}

// to convert into lowerercase
void convertIntolowerercase(char arr[])
{
   int i=0;
   int n=strlen(arr);
   for(int i=0;i<n;i++)
   {
     if(arr[i]>='A' && arr[i]<='Z')   // checking whether that word is upper case or not to convert into lowercase
     {
        arr[i]=arr[i]-'A'+'a';  // to convert int lowercase
     }
   }

}

int main()
{
    // to convert into uppercase
    char arr[100];
    cin.getline(arr,100);
    
    convertIntoUppercase(arr);
    cout<<arr<<endl;

    // to convert into lower case
    char arrr[100];
    cin.getline(arrr,100);

    convertIntolowerercase(arrr);
    cout<<arrr;

    return 0;
}