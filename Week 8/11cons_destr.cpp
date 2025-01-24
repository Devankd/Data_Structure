#include<iostream>
using namespace std;

class customer
{
    string name;
    int* data;

    public:
    customer()
    {
        name="4";
        cout<<"Constructor is "<<name<<endl;
    }

    //constructor
    customer(string name)
    {
        this->name=name;
        cout<<"Constructor is "<<name<<endl;
    }
   
    
    //destructor
    ~customer()   
    {
        cout<<"Destructor is "<<name<<endl;
    }

};

int main()
{    // constructor is called in order but destructor is called in reversed order;
    customer A1("1"), A2("2"), A3("3");    // memory for A1, A2, A3 are destroyed but for A4 not destroyed 
    customer* A4 = new customer;          // constructor is called but memory is not released yet so to release delete A4;
}

