#include <iostream>
using namespace std;

class rectangle
{   
    private:
    float length;
    float breadth;

    public:
    // get and set
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
    // constructors
    rectangle()    // non parameterised constructor
    {
        length=0;  // to remove garbage value
        breadth=0;
    }
    rectangle(int l,int b) // parameterised constructor, 
    {                      // there is no need of non parameterised constructor to give zero value in variable. at place of that can use rectangle(int l=0,int b=0){ }
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &rect)  // copy constructor
    {
        length= rect.length;
        breadth=rect.breadth;
    }

    float perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()     // also overloaded constructor
{
    rectangle r;   
    rectangle r1();      
    rectangle r2(10,5);  
    rectangle r3(r2);
    cout<<"The length of rectangle is "<<r3.getLength()<<endl;
    cout<<"The beadth of rectangle is "<<r3.getBreadth()<<endl;

    
    cout<<"perimeter is "<<r3.perimeter();       
    return 0;
}
// when any car is bought then it is not like it do not had color, when we bought them then set that's color, but it contain a color from initial(default) and we can set new value accordingly.
// constructor is 4 types - default(buind in constructor), parameterised constructor, non parameterised constructor, copy constructor
//when no constructor is made then a default constructor which is stored in compiler is called