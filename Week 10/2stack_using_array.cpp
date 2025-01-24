#include<iostream>
using namespace std;

// implemention of stack using array
// create one stack using an array

class Stack
{
    public:
    //Properties
    
    int *arr;
    int top;
    int size;
    
    Stack(int size){
           arr = new int[size];
           this-> size= size;
           top = -1;
    }

    // Behaviour
    //function

    void push(int data){
        if( top< size-1)
        {
            //space available
            //insert
            top++;
            arr[top]= data;
            cout<<data<<" pushed into the stack"<<endl;
        }
        else {
             //space is not availabele 
             cout<<"Stack Overflow "<< endl;
        }

    }

    void pop() {
        if(top>=0)
        {
            cout<<arr[top]<<" popped from the stack "<<endl;
            //stack is not empty
            top--;
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