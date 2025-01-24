#include<iostream>
using namespace std;


class customer
{
    string name;
    int account_number;
    int balance;
    public:
    // parameterised constructor with same variable name

    customer(string name, int account_number, int balance)
    {
        cout<<"Parameterised constructor is called"<<endl;
        name=name;                         // here in name = name  both name are same ie rohit is updated by rohit(nearer) but name of class will not be uptated so this operator is used & same variable name is used for better readebility
        account_number=account_number;
        balance= balance;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;  // so class's variable has some garbage value 
    }
};

int main()
{
    // customer a;  this will through error because default constructor is not declared in class. reason=> if no any other constructor(like parameterised etc) is created by us in class then compiler will create a default constructor itself but in other cases,will not create and throught error 
    customer c1("devank", 222221, 2);
    c1.display();



}

 