#include <iostream>
using namespace std;

int main()
{   

    double d = 5.7;
    int x=(int)d+ 2;   // double is converted into int data type by syntax (int)d
    cout << "value of x is "<<x<<endl;
    int n;
    if(cin>>n)
    {
        cout<<"Hello world"<<endl;
    }
    // int/int= int, float/int=float, int/float=float, double/int=double, float/double=double.
    cout<<(double)2/3<<endl;   //(double)2=2.0 & it is a type conversionfrom int to double
    
}