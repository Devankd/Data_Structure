#include <iostream>
using namespace std;
void solve(int* num)  // pass by value
{
   num = num+1;
}

int main()
{
    int x = 12;
    int* p = &x ;
    cout<< " before "<< p <<endl;
    solve(p);
    cout<< " before "<< p <<endl;
    
}