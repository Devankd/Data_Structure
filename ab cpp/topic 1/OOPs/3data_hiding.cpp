#include <iostream>
using namespace std;

// In class only function should be made public, but data should be made private otherwise mishandeling will be there



class rectangle
{   
    private:
    float length;
    float breadth;

    public:
    // void setLength(int l)
    // {
    //     length=l;          // this is for setting length and getting input
    // }
    void setLength(int l)
    {
        if(l>=0){
            length=l;
        }
        else{
            length=-l;
        }
       
    }

    void setBreadth(int b)
    {
        if(b>=0){
            breadth=b;
        }
        else{
            breadth=-b;
        }
       
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    rectangle r;   
    // r.length=10;  // Now since length and breadth is private so we can not access them directly. So we need to make a function inside class - void setLength(int l), getLength()
    // r.breadth=5;
    r.setLength(10);
    r.setBreadth(5);
    cout<<"The length of rectangle is "<<r.getLength()<<endl;
    cout<<"The beadth of rectangle is "<<r.getBreadth()<<endl;

    
    cout<<"perimeter is "<<r.perimeter();       
    return 0;
}
// get___ isknown as Accessor , used to , only can read property
// set___is known as Mutator,  used to change the value of data.
// get and set functions are known as property function