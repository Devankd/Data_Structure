# include <iostream>
using namespace std;

int main()
{
     int x=10;
     int &y=x;

     cout<<x<<endl;
     y++;            // x=11
     x++;             // x=12
     cout<<x<<endl;   // prints 12
     cout<<&x<<" "<<&y;

     return 0;

}