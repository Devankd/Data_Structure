#include <iostream>
using namespace std;
void solve(int num)  // copy will created 
{
   num++;
}

int main()
{
    int x = 12;
    
    solve(x);

    cout<< x << endl; // 13
}