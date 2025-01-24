#include <iostream>
using namespace std;

int even_sum(int n)
{
   int sum=0;
   for(int i=2;i<=n; i=i+2)
   {
       sum=sum+i;
   }
   return sum;
}

int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;
    cout<<endl;
    int summ=even_sum(n);
    cout<<"Sum of " <<n<< " even is "<<summ;
    return 0;
}
