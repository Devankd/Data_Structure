#include<iostream>
#include<string>
using namespace std;

// can not read space,enter,tab key
int main()
{
// to overcome thr problem of cin in previous question about spaces, we use getline.

   char nam[100];
   cin.getline(nam,10); // for this add #include<string> 
   cout<<nam;
}
// for getline delimiter is enter key or delemated when defined indeces get used
// getline takes whole string with spaces
// it only do not take enter bout will take space

