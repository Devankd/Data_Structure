#include<iostream>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;

    public:
    //default 
    customer(){}
    //parameterised constr
    customer(string name, int account_number, int balance)
    {
        cout<<"Parameterised constructor is called"<<endl;
        this->name=name;                         // here in name = name  both name are same ie rohit is updated by rohit(nearer) but name of class will not be uptated so this operator is used & same variable name is used for better readebility
        this->account_number=account_number;
        this->balance= balance;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;  // so class's variable has some garbage value 
    }

};


int main()
{
    customer A1("Ram",5, 8);
    customer A2(A1);            //copy value of A1 into A2  // copy constructor like default constructor is already present in class(by default present in class)
    A2.display();
    customer A3;    // default 
    A3=A2;          // alt way to copy or assignment operator
    A3.display();

}