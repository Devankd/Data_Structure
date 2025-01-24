#include <iostream>
#include<cstring>    // this is used for string

using namespace std;

int main()
{
    char S[50]="Hello world";
    cout<<strlen(S)<<endl;       // strlen means string length and it tells length of a string    
    char *P;
    cout<<"enter a string ";
    cin.getline(P,100);
    cout<<"Length of string is "<<strlen(P)<<endl;

    char s1[20]="Good ";
    char s2[20]="Morning ";
    strcat(s1,s2);               //strcat(destination,source)

    cout<<s1<<endl;     // this is string catenation here s1 is destination aned s2 is source and source will catenationed to destination

    char p1[20]="Bye dear ";
    char p2[20]="brother ";
    strncat(p1,p2,3);

    cout<<p1;    // 3 words are concinated from second string
    
    char q1[20]="Good";
    char q2[20]="";

    //strcpy(q2,q1);     //strcpy(destination,source), q2 is destination and q1 is source and string of source will be copied in destination

    cout<<q2<<endl;

    strncpy(q2,q1,2);
    cout<<q2;
    
    return 0;
}