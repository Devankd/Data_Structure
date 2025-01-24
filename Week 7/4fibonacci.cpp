#include<iostream>
using namespace std;

int fibonacci(int n)
{
   if(n==2)  // second term = 1
   {
     return 1;
   }   
   if(n==1)  // first term = 0
   {
     return 0;
   }
   int ans = fibonacci(n-1) + fibonacci(n-2); 
   return ans; 
}

int main()
{
    int n; 
    cout<<"Enter the term you want to see ";
    cin>>n;
    int ans=fibonacci(n);
    cout<<n<< "th term is: "<< ans;

} 
// most important
// magical line => 1 case solve kr do bakki recursion sambhal lega 