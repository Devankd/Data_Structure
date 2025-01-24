#include<iostream>
#include<string>
#include <vector>
using namespace std;

void printsubsequence(string str, string output,int i)
{
    if(i>= str.length())
    {
        cout<<output<<" ";
        return;
    }

    //exclude
    printsubsequence(str,output,i+1);

    //include
    output=output+str[i];              // output.push_back(str[i]); also can be used  // concatenation
    printsubsequence(str, output,i+1);


    // // If you want to use @include first then @exclude

    // //include
    // output=output+str[i];              
    // printsubsequence(str, output,i+1,v);
    // output.pop();

    // //exclude
    // printsubsequence(str,output,i+1);

}

int main()
{
    string str="abc";
    string output="";
    int i=0;
    printsubsequence(str,output,i);
}