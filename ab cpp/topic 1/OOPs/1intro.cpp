#include <iostream>
using namespace std;

// In class only function should be made public, but data should be made private



class rectangle
{   
    public:

    //data (this may be hidden by using private acces specifier)
    float length;
    float breadth;

    // function (generally declared in public specifier accesible to user)

    float area();
    float perimeter()
    {
        return 2*(length+breadth);
    }
    float digonal();    //definition of this function can be declared here by using {} & to define outside use rectangle::digonal(){ definition} 

};

int main()
{
    rectangle r1,r2,r3;  // here r1 is object of class rectangle which can access all the data and function which is inside that class and will show public specifier like button & r2,r3 are also object of class rectangle  
    
    r1.length=10;
    r1.breadth=5;

    cout<<"perimeter of rr1 is "<<r1.perimeter();        //dot operator is used to accessing the data and functions(members) inside that class 

}

// memory distribution all the data and memory stay inside code section and do not alloted any memory
// object r1 , r2,r2 alloted memory inside stack and there all members length,breadth is alloted memory 