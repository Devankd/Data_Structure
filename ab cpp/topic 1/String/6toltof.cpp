#include<iostream>
#include <string.h>

using namespace std;

int main ()
{
    //strtol(str1,NULL)- string to long & strtof(str1,Null)- string to float
    
    char s1[10]="235";         //235 is a string which have some meaning
    char s2[10]="54.78";

    long int x=strtol(s1,NULL,10);  //10 for binary system,can write 8,2 for octal and binary system
    float y=strtof(s2,NULL);
    
    cout<<x+10<<endl<<y-5<<endl;
    
    // strtok(str1,"=;")- 
    char r1[100]="x=10;y=20;z=40";
    char *token=strtok(r1,"=;");

    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }

    char *toke=strtok(r1,";");

     while(toke!=NULL)
    {
        cout<<toke<<endl;
        toke=strtok(NULL,";");
    }


}
