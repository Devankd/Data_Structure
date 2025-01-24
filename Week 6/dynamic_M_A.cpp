#include<iostream>
using namespace std;

int main()
{
    // 
    // new int;            // this is a memory address of 4 byte(integer-4 byte);

    //here n is statically aloacated at compile time, and unnamed variable(new int) is dynamically alloacated at run time results in two variables
    int *n= new int;    // since memory address is stored in pointer so here
    *n=3;   // can set and access value by using *n 

    int* m;  // static
    m=new int;   //dynamic

    *m=5;             
    cout<<*n<<endl;
    int sum=(*m+*n);
    cout<<sum;

}