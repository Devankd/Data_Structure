#include <iostream>
using namespace std;

void update(int *p)
{
    cout<< " Address stored inside p is: " << p<<endl; 
    cout<< " Address of p is: "<< &p<<endl;

    *p = *p+10;
}
int main()
{
    int a=5;
    cout<< " Address of a is: " <<&a<<endl; 
    int* ptr = &a;
    cout<< " Address stored inside ptr is: " << ptr<<endl; 
    cout<< " Address of ptr is: "<< &ptr<<endl;

    
    update(ptr);
    cout<< "value of a is: "<<a<<endl;  //15
}