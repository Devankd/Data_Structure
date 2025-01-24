#include<iostream>
#include <string.h>

using namespace std;

int main ()
{
    // strtok(str1,"=;")- 
    char r1[100]="x=10;y=20;z=40";
    char *toke=strtok(r1,";");

     while(toke!=NULL)
    {
        cout<<toke<<endl;
        toke=strtok(NULL,";");
    }
     
    return 0;

}