#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

class Stack
{
    Node* top;
    int size;   //actual size of stack

    public:

    Stack()
    {
        top = NULL;
        size = 0;
    }

    //push
    void push(int value)
    {
        Node* temp= new Node(value);
        if(temp==NULL) // if heap memory filled fully
        {
            cout<<"Stack overflow"<<endl;
            return;
        }
        else{
        temp->next= top;
        top=temp;
        size++;
        cout<<"Pushed "<<value<<" into the stack \n";
        }
    }

    //pop
    void pop()
    {
        if(top==NULL)
        cout<<"Stack underflow\n";
        else{
            Node *temp = top;
            cout<<"Popped "<<top->data<<" from stack\n";
            top=top->next;
            delete temp;
            size--;
        }
    }
    //top data
    int getTop()
    {
        if(top==NULL)
        {
            cout<<"stack is empty \n";
            return -1;
        }
        else{
            return top->data;
        }
    }
    //IsEmpty
    bool IsEmpty()
    {
        return top==NULL;
    }
    //isSize
    int IsSize()
    {
        return size;
    }
};

int main()
{
    Stack S;
    S.push(6);
    S.push(16);
    S.push(26);
    S.push(36);
    S.push(46);
    S.pop();
    cout<<S.getTop()<<endl;
    cout<<S.IsEmpty()<<endl;
    cout<<S.IsSize()<<endl;
}
