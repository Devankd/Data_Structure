#include<iostream>
using namespace std;


class customer
{
    string name;
    int account_number;
    int balance;
    public:

    //default constructor
    customer()
    {
        name="raman";
        account_number=22;
        balance=0;
    }
    // parameterised constructor with same variable name

    customer(string name, int account_number, int balance)
    {
        cout<<"Parameterised constructor is called"<<endl;
        this->name=name;                         // here this-> name is name of class where value of name(devank) will be stored
        this->account_number=account_number;     // this->name= name <=> (*this).name=name
        this->balance= balance;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;  // so class's variable has some garbage value 
    }
};

int main()
{
    customer c,d;
    c.display();
    d.display();

    customer c1("devank", 222221, 2);
    c1.display();



}