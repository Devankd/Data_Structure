//enum

#include<iostream>
using namespace std;

  enum day{mon,tue,wed=6,thu,fri=10,sat, sun};
  enum dept{ee,cs,it,mech};

  int main()
  {
      day d; //here day is 
      d=tue; //d=1  is wrong
      cout<<tue<<endl;    
      cout<<wed<<endl;
      cout<<sun<<endl;
      cout<<thu<<endl;
      cout<<fri<<endl;
      cout<<sat<<endl;
     return 0;
 }  


 //Typedef
 
 

