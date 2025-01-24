#include<iostream>
#include<string.h>
using namespace std;

int  reverse_name(char name[])
{
    int i=0;
    int j=strlen(name)-1;
    while(i<=j)   // two pointer aproach
    {
       char ch=name[i];  // can use swap(name[i],name[j-1])
       name[i]=name[j];
       name[j]=ch;
       i++;
       j--;  // time complexity = O(n)  ie. n/2 operation
    }
    /* above code in for loop

    for(; i<=j;)
    {
        swap(name[i],name[j]);
        i++;
        j--;
    }
    */
  
}
int main()
{
    char name[10]={"Devank"};
    cout<<"Initiallly "<<name<<endl;   
    reverse_name(name);

    cout<<" after reversing name "<<name;
    

}