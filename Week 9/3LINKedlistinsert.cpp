#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node()
    {
        this->data =0;
        this-> next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this-> next = NULL;
    }
};  

void print(Node* head)
{
    Node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

// i want to insert at node at right of a node
void insertAtTail(Node* &head, int data)  // pass by reference
{
        //step 1 - create a newnode
        Node* newNode= new Node(data);
        //step 2- in next(pointer) of new node store the memory location of next node(head)
        newNode ->next= head;
        //step 3- now update head(first node) ans new node
        head = newNode;
}

int main()
{
    Node* tail = new Node(10);
    insertAtTail(tail,20);
    insertAtTail(tail,30); 
    insertAtTail(tail,40);
    insertAtTail(tail,50);

    print(tail);  //50 40 30 20 10
}