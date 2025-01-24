// Type of functions in a class

#include<iostream>
using namespace std;

class rectangle
{
    private:
      int length;
      int breadth;
    public:
      rectangle();
      rectangle(int l, int b);
      rectangle(rectangle  &r);   // constructor

      void setlength(int l);
      void setbreadth(int b);  // mutator

      int getlength();
      int getbreadth();   // accesor

      int area();
      int perimeter();  // facilitator

      int isSquare();   // enquiry
      ~rectangle();  // destructor


};