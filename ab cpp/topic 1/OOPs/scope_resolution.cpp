#include<iostream>
using namespace std;

class Rectangle
{
    private:
      int length;
      int breadth;
    public:
      Rectangle();
      Rectangle(int l, int b);
      Rectangle(Rectangle  &r);   // constructor

      void setlength(int l);
      void setbreadth(int b);  // mutator

      int getlength(){return length;};
      int getbreadth(){return breadth;};   // accesor

      int area();
      int perimeter();  // facilitator

      int isSquare();   // enquiry
      ~Rectangle();  // destructor
};

int main()
{

}
Rectangle::Rectangle()
{
  length=1;
  breadth=1;
 }
 Rectangle::Rectangle(int l, int b)
{
  length=l;
  breadth=b;
 }
 Rectangle::Rectangle(Rectangle &r)
{
  length=r.length;
  breadth=r.breadth;
 }

    