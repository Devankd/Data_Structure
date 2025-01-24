// Constructor- it is a special function that is invoked automatically at the time of object creation 
// Name of constructor should be same as class name
// it doesn't have any return type
//it is used to initialize the value ie to set value of name,balance ect
#include<iostream>
using namespace std;


class customer
{
    string name;
    int account_number;
    int balance;
    public:
    // default constructor
    customer()
    {
        cout<<"Default constructor is called";
    }

    // parameterised constructor
    customer(string n, int a, int b)
    {
        name=n;            // here n and name is are different ie vaiable name is different
        account_number=a;
        balance= b;
    }
    
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

};

int main()
{
    customer c1;
    customer c2("devank", 222221, 2);
    c2.display();



}