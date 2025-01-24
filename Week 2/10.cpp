#include<iostream>
using namespace std;
// operator 



int main()
{
    bool a = true;
    bool b = false;
    cout<< (a&b)<<endl;  //and
    cout<<(a|b)<<endl;   //or
    cout<<(a^b)<<endl;  //xor
    cout<< (~b)<<endl;
    cout<<(~a);
    return 0;
}