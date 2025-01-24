#include <iostream>
using namespace std;
void solve(int* num)  // pass by reference 
{
   *num += 1;
}

int main()
{
    int x = 12;
    
    solve(&x);

    cout<< x << endl;   // 13
}