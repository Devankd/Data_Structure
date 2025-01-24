#include<bits/stdc++.h>   //this header includes every headerfile
using namespace std;

// namespace raj
// {
//     int val = 50;  // here it will not throw error because this val have different scope
//     int getVal()
//     {
//         return val*10;
//     }

// }
// int main()
// {
//     int val = 20;
//     cout<<val<<endl;      //prints 20   //if namespace std was not declared above then we need to write std::cout

//     cout<<raj::val<<endl;    //prints 50
//     cout<<raj::getVal<<endl;  // prints 500
//     return 0;
// }


// /* int main()
//     {
//         int val=10;
//         double val=50.0;   // this will throw an error because both have same variable name val
//     }

// */
namespace raj{ int name; int age;};
int main()
{
  raj::name=06; raj::age=7;
}