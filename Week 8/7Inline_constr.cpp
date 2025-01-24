#include<iostream>
using namespace std;

class customer
{
    string name;
    int acc_no;
    int balance;

    public:
    // inline constructor

    inline customer(string a, int b, int c):name(a),acc_no(b), balance(c){

    }
    void display()
    {
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }
};


int main()
{
    customer A1("Ram",5, 8);
    A1.display();

}