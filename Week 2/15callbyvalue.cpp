#include <iostream>
using namespace std;
//function declaration

int add(int a, int b)
{
    return a+b;  // if we are invoking any function then declaration of that function should be above of that function otherwise if you declare function below then it will throw error 
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b ";

    cin>>a>>b;
    
    int sum = add(a,b);  // declare add function above this function call and if you declare below this then it throw error
    cout<<sum;
    return 0;
}
// this is wrong way of defining & it will throw error 
/*int add(int a, int b)
{
    return a+b;
}
*/


