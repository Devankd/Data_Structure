#include <iostream>
using namespace std;

int main()
{
    char S[10]="Hello";
    char s[]="Hello";
    char P[]={'H','e','l','l','o','\0'};
    char A[]={'H','e','l','l','o'};

    char R[]={'H','e','l','l','o','\0','m','p'};

    char Q[]={65,66,67,68,0,69,70};  // or use \0

   // char *t="Bye";  //here Bye is string and t is character and conversion of string to char is not allowed, it will print Bye but will show warning
    string T="Hello";

    cout<<S<<endl;
    cout<<s<<endl;
    cout<<P<<endl;
    cout<<R<<endl;
    cout<<Q<<endl;
    cout<<T<<endl<<endl;
    cout<<A<<endl;
   // cout<<t<<endl;

    return 0;
}