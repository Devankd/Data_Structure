#include<iostream>
using namespace std;
//class is a user defined data type and can and ist is blue print for creating an object 

// object is an entity that has a state and behaviuor or anything thst exist in physical world
// An object is an instance of a class, created by allocating memory for its attributes and methods

class student  //inside a class both data(known as attributes ie int,string etc) and function(known as method) can be present
{   //by default private accesifier is given their

    int height;   // A private member can not be accessed outside this class directly
    string NAME;
    // so to access private member outside class create a function in public and set the height

    public:   
    string name;
    int roll_no, age;
    string grade;

    void setNAME(string N) // in any form if user has not filled name than it will print invalid name and will return => this power is also given in oops. same way can be for age like age can not be negative  so if(age<=0){cout<<"invalid age"; return;}  
    {
        if(N.size()<=0)
        {
            cout<<"invalid name";
            return;
        }
        NAME=N;
    }
    string get_NAME(int pin)   // if user know reqired pin then only he can get the NAME
    {
        if(pin==12345)
        {
            return NAME;
        }
        else
        return " ";
    }

    void set_height(int h)
    {
        height=h;  // height is private member but can be accesed by this function inside same class
    }
    void get_height()
    {
        cout<<height<<endl;
    }
    
};



int main()
{
    // normal way
   string Name;            // string is data type & Name is variable of string data type
   int Age, Roll_no;
   string Grade;
   cin>>Name>>Age>>Roll_no>>Grade;

   //class or oops way

   //class student
   student s2; 
   student s1;               // student is user defined data type and s1 is object or variable of student data type
   cin>>s1.age>>s1.name>>s1.roll_no>>s1.grade;

   s1.set_height(6); // for accessing  private member(height)

   s1.get_height();  // will print height which is private member

   cout<<Name<<" "<<s1.name<<endl;

   s1.setNAME("");
   s1.setNAME("RAM");
   cout<<s1.get_NAME(12)<<endl;
   cout<<s1.get_NAME(12345)<<endl;

 


}