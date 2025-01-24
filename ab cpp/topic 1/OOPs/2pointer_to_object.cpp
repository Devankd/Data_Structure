#include <iostream>
using namespace std;
//to make 



class rectangle
{   
    public:

    float length;
    float breadth;

    
    float area();
    float perimeter()
    {
        return 2*(length+breadth);
    }
    float digonal();    

};

int main()
{
    rectangle r; 
    rectangle *p=new rectangle();  // object is created in heap memory  // first way of initialisation

    // rectangle *p;
    // p=new rectangle();   // this is second way or declaration and initialisation

    p->length=20;   
    p->breadth=30;

    cout<<"perimeter of r is "<<p->perimeter();         

}