#include <bits/stdc++.h>
using namespace std;
int square(int n)
{

   int start = 1;
   int add = 3;

   int p = 1;
   while (start < n)
   {
      start += add;
      add += 2;
      p++;

      if (start == n)
      {
         return p;
      }
   }
   return -1;
}

int main()
{
   int n;
   cin >> n;
   cout << square(n);
}