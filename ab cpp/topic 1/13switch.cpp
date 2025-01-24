#include <iostream>

using namespace std;
int main()
{
    int x=2; 
    switch(x)     //if x=3 it will print madhusdan. for more than 3 not valid
    {
        case 1: cout<<"ram";
            break;                 //if remove break then wil print all cases after first true case til next break comes
        case 2: cout<<"shyam";
            break;
        case 3: cout<<"madhusudan";
            break;
        default : cout<<"not valid"; //this default will be executed at last even if it is at top


    }
}
