//return_type function_name (parameter list/argument list) 
/*return_type is output which will return atmost one output
second part is input  which can have zero or more values
avoid interactive code (for eg. cin , cout) inside a function which will be called by main function
write interactive code in main function only
*/

#include <iostream>
using namespace std;

void display()
{
    cout << "Hello ";
}

int main()
{
    display();
    return 0;
}