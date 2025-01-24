#include <iostream>
using namespace std;



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
    rectangle r;     // object is created in stack memory
    rectangle *p;    // object is created in stack memory
    p=&r;
    p->length=20;   // -> is like dot operator for pointer
    p->breadth=30;

    // r.length=10;
    // r.breadth=5;

    // cout<<"perimeter of r is "<<r.perimeter()<<endl;        
    cout<<"perimeter of r is "<<p->perimeter();         

}//in java we can not create object in stack , always created in heap