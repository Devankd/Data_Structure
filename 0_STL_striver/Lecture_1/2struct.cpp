#include<bits/stdc++.h>   //this header includes every headerfile
#include<iostream>
using namespace std;

struct node   //struct is a user defined data type which is used to store many other type of data type 
{
    string str;
    int num ;
    double doub;
    char x;

    node(string str_, int num_, double doub_,char x_)  // also can have array[]
    {
        str= str_;
        num= num_;
        doub= doub_;
        x=x_;
    }



};            // semicolon is must be given here


int main()
{
    //this is wrong way of defining although it will work but dont use it
    node ram;
    ram.str='Devank';
    ram.num= 25;
    ram.doub = 10.2;

    // write way to defining

    // node ram= new node("Devank",26,46.3,"");


    return 0;
}