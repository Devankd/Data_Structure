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
{
    customer A1("1"), A2("2"), A3("3");
    customer* A4 = new customer;
    delete A4;    
  
}

// Topics after this concept in oops are only asked in interview not in dsa so everythings are present in notes after this
