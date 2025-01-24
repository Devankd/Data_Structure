#include<iostream>
using namespace std;
// pointer is a variable which store address of other variabe

// by using pointer ptr we can access 1) address of that variable, 2) value of that variable(dereferencing )
int main()
{
    int a = 5;
    cout<< a << endl;
    cout << &a <<endl;  // & => address of operator 

    // pointeer create
    int*  ptr = &a;  // int => data type, * => dereference operator or syntax to creat pointer, p=> variable name, & => address of operator, a => variable
    // int* => is a pointer to integer data
    // int* p => p is a pointer to integer data

    char ch = 'a';
    char* pt = &ch;  // pt is a pointer to char data

    bool bl = true;
    bool* p = &bl;   // p is a pointer to bool data & it is pointing to bl variable

    // access the value ptr is pointing to 
    cout << a << endl;     // value of a
    cout << &a << endl;    // address of a
    cout << ptr << endl;   //  address of a or value of ptr
    cout << *ptr << endl;  // value of a.// *ptr == a // dereferencing => value at location stored in ptr
    cout << &ptr << endl;  // address of ptr
 
    // size of pointer
    cout<<"size of pointer"<<endl<< sizeof(ptr) <<endl;
    cout<< sizeof(pt) <<endl;              // size of each pointer will be same as it is storing address, does not matter it is storing address of char or bool variable
    cout<< sizeof(p) <<endl;

    // BAD practice 
    int* ptrr;                            // it will store garbage value
    cout<< "bad practice: "<<*ptrr <<endl;

    // Null pointer/ good practice
    int* pntr = 0;                    // can use pntr= NULL or nullptr
    cout <<"Good practice: "<< *pntr <<endl ;

    // for integer 
    // a+1 => 5+1 => 6
    // ptr+1 => 104+1 => 108  
    // *ptr = *ptr+1 => 5+1 => 6 // a=6 & *ptr=6

    


    
}