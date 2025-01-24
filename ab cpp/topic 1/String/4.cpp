#include<iostream>
#include <string.h>

using namespace std;

int main ()
{
    char s1[12]="Grandmother";
    char s2[10]="mot";
    char s3[10]="n";
    char s4[10]="k";
    
    // strstr(main,sub), s2- sub,s main
    if(strstr(s1,s2)!=NULL){
       cout<< strstr(s1,s2)<<endl;     
    }
    if(strstr(s1,s3)!=NULL){
       cout<< strstr(s1,s3)<<endl;     
    }
    if(strstr(s1,s4)!=NULL){
       cout<< strstr(s1,s4)<<endl;    // since k is not there in grandmother so it be null 
    }
    else{
        cout <<"Not found"<<endl<<endl;
    }

    //strchr(main,char)- prints al words after that char ,strrchr(main,char)- prints only that char

    cout<<strchr(s1,'d')<<endl;
    cout<<strrchr(s1,'d')<<endl;

    //strcmp(str1,str2)- it compares two strings and returns +(if str1 is greater),0(if both strings have same value),-(if string 1 has less value than str 2)

    char r1[10]="Hello";
    char r2[10]="Hello";   // H = 73
    char r3[10]="hello";   // h= 105
    cout<<strcmp(r1,r2)<<endl;
    cout<<strcmp(r3,r2)<<endl;
    cout<<strcmp(r2,r3)<<endl;
    return 0;

}
