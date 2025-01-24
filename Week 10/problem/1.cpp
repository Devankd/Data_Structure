// create two stack using one arr

#include<iostream>
using namespace std;

// implemention of stack using array
// create one stack using an array

class Stack
{
    public:
    //Properties
    
    int *arr;
    int top1;
    int top2;
    int size;
    
    Stack(int size){
           arr = new int[size];
           this-> size= size;
           top1 = -1;
           top2 = size;
    }

    // Behaviour
    //function

    void push1(int data){
        if( top1< size-1)
        {
            //space available
            //insert
            top1++;
            arr[top1]= data;
        }
        else {
             //space is not availabele 
             cout<<"Stack Overflow "<< endl;
        }
    }

    void push2(int data){
        if( top1< size-1)
        {
            //space available
            //insert
            top2++;
            arr[top2]= data;
        }
        else {
             //space is not availabele 
             cout<<"Stack Overflow "<< endl;
        }

    }

    void pop1() {
        if(top1>=0)
        {
            //stack is not empty
            top1--;
        }
        else{
            //stack is empty
            cout<<"stack Under flow";
        }
    }

     void pop2() {
        if(top2>=0)
        {
            //stack is not empty
            top2--;
        }
        else{
            //stack is empty
            cout<<"stack Under flow";
        }
    }

    
    int getTop() {
        if(top == -1)
        {   // stack is empty
            cout<<" there is no element in stack";

        }
        else{
            return arr[top];
        }

    }

    // return number of valid element present in stack
    int getSize(){
         return top+1;
    }
    
    bool isEmpty() {
        if(top== -1)
        {
            return true;
        }
        else{
            return false;
        }

    }


};

int main()
{
    // creation
    Stack s(5);

    // insertion

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.isEmpty())
    {
        cout<< s.getTop() << " ";
        s.pop();
    }

    cout<<endl;

    s.pop();

}