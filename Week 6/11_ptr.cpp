#include <iostream>
using namespace std;
void solve(int** ptr)
{
  //  ptr= ptr+1;   // x will not change
  //  *ptr= *ptr +1;  // x will not change
    **ptr = **ptr +1;  // x will increase by 1 ie 13
}

int main()
{
    int x = 12;
    int* p = &x;
    int** q = &p;
    solve(q);

    cout<< x << endl; 
}

// reference => same memory location can be called by differnt name
