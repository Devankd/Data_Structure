#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int roll_no;
    int age;
    string grade;
};

int main()
{
    // normal dynamic memory allocation
    int* p = new int;
    *p=5;
    cout<<*p<<endl;

    // DMA in oops

    student* s = new student;
    (*s).name = "Devank";   // or s->name = "Devank";  // both are same
    (*s).roll_no = 31;
    s->age = 22;
    s->grade = "A+";

    cout<< s->name <<" "<< (*s).roll_no <<endl;
}