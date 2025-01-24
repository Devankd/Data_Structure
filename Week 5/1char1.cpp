#include<iostream>
using namespace std;
#include<string>

int main()
{
   char ch[100]={'r','a','m'};
   char c[100]={"ram"};
   char cha[100]={"ram chandra"};

   cout<<ch<<endl;   // ram
   cout<<c<<endl;    //ram
   cout<<cha<<endl;  // ram chandra
   
   char name[100];
   cin>>name;    // it will read sequence of character before any space      
   cout<<name<<endl;// it will print only word before space because cin only reads the element before first space 
   // cin donot take input of next line, of next tab and after space

   // to overcome above problem of cin, we use getline.

   char nam[100];
   cin.getline(nam,100); // fo this add #include<string>
   cout<<nam;

}