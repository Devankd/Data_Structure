#include <iostream>
using namespace std;


/*int maxim(int x, int y)
{
    if (x>y)
    return x;
    else return y;
}
float maxim(float x,float y)
{
  return x>y?a:b ;       // it is ternary operator it means if x is greater than y then
}                           return x otherwise return y
*/

// above whole code is rewritten only due to change in data type so template is used

template<class T>
T maxim(T x, T y)
{
    return x>y?x:y ;
}
int main()
{
    cout<<maxim(4,43)<<endl;
    cout<<maxim(4.2,5.8)<<endl;
    cout<<maxim(6.5f,7.2f)<<endl;
    return 0;
}
