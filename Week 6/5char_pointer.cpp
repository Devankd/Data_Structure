#include<iostream>
using namespace std;

int main()
{
    char ch[10] = "Devank";
    char* p = ch;

    cout<< ch <<endl;   // unlike array it will print whole string
    cout<< &ch <<endl;  // base address
    cout<< ch[0] <<endl;  // D
    cout<< p <<endl;      // Devank
    cout<< &p <<endl;     // address of p
    cout<< *p <<endl<<endl;     // first element of string

    char name[10] ="DevankDub"; // in 10 length, 9 will be char and one will be null char
    char* cptr = &name[0];

    cout << name <<endl;      
    cout << &name <<endl;
    cout << *(name + 3)<<endl;
    cout << cptr <<endl;       // DevankDub
    cout << &cptr <<endl;    //address of  cptr
    cout << *(cptr+3) <<endl;  // a
    cout << cptr +2 <<endl;  // vankDub
    cout << *cptr <<endl;   // D
    cout << cptr+4 <<endl;  // nkDub
    cout << cptr+ 10 <<endl<<endl;
    
    char x = 'k';  // since it do not have delimator null character 
    char* xptr= &x;
    cout<< xptr <<endl;  // so here after k some garbage value will print
}