#include<iostream>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;

    public:

    //copy constructor
    customer(customer &B)   // B A1 ka reference utha rha h // here if & will not be present then copy will not be done because first value of A1 need to be coppied into B then value of B will be coppid to A2, but to copy from A1 to B a copy constructor is needed and ye isi loop me fas jayega
    {
        name= B.name;
        account_number= B.account_number;
        balance = B.balance;
    }


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
    customer A2(A1);            //copy value of A1 into A2  // here copy constructor manually declared by user in class
    A2.display();

}