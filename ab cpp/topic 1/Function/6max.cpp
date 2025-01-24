#include <iostream>
using namespace std;

/*
int max(int x,int y,int z)
{
    return x>y && x>z ? x:y>z?y:z ;  //if x is greater than y as well as x is greater than z then return x otherwise if y is greater than z then return y otherwise return z
}
int main()
{
    cout<<max(4,5,6);
    return 0;
}
*/

int max(int x,int y=0,int z=0)         //here y=0 and z=0 are default arguments 
{
    return x>y && x>z ? x:y>z?y:z ;    // : stand for otherwise, ? stand for yes or no means if yes then return that.
}
int main()
{
    cout<<max(4,5,6)<<endl;
    cout<<max(10,30)<<endl;
    cout<<max(10)<<endl;
    return 0;
}