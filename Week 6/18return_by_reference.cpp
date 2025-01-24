#include <iostream>
using namespace std;
// this is most important code 
int* solve()
{
    int a = 5;
    int* ans = &a;
    return ans;
}

int main()
{
    solve();
    
}