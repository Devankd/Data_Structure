// Destructor -> it is an instance member function that is invoked automatically whenever an object is going to destroyed
// It is a last function that is going to be called before an object is destroyed
// It doesn't contain any argument or parameter, doesn't have return type and only one in a class

// Both constructor and destructor will be in public section
// if we will not create destructor then program automaticallly carete it 

//Destructors deletes all resourses which are setted dynamically, do not delete object
// 


#include<iostream>
using namespace std;

class customer
{
    string name;
    int* balance;
    public:
    //constructor
    customer(string name, int bal)
    {
        cout<<"Constructor is called \n";
        this->name=name;
        balance = new int;
        *balance = bal;
    }
    void display()
    {
        cout<<name<<" "<<*balance<<endl;
    }
    
    //destructor
    ~customer()   // it releases dynamic memory data
    {
        delete balance;
        cout<<"Destructor is called \n";
    }


};

int main()
{
    customer A1("Ram", 5);
    A1.display();
}

