#include <iostream>
using namespace std;

int main()
{
    float billamount;
    float discount=0.0;
    cout<<" enter billamount "; 
    cin>>billamount;

    if(billamount >= 500)
    {
        
        discount = billamount*20/100;

    }
    else if(billamount >=100)
    {
        discount = billamount*10/100;

    }

    cout<<"billamount is \n"<<billamount ;

    cout<<"discount is "  <<discount;

    cout<<"total bill amount is "<< billamount - discount;
    
  return 0;
}