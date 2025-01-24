#include<iostream>
using namespace std;

//when a function calls itself
// when bigger problem's soln depends on chhoti and same type of problem

int factorial(int n)
{
    cout<< "Function call for n: "<< n <<endl;
    
   //base case
   if (n == 1)
   {
     return 1;
   }
   
   // recursive relation
   int ans = n * factorial(n-1);
   return ans;
}


int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>>n;

    int ans = factorial(n);
    cout<< "Ans is: "<<ans<<endl;
}