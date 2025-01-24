#include<iostream>
using namespace std;
// insertion at starting
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

// i want to insert a node left the head of linked list 
void insertAtHead(Node* &head, int data)  // pass by reference
{
    if(head==NULL)
    {
        head= new Node(data);  // it will call node constr and next will be zero
    }
    else{
        //step 1 - create a newnode
        Node* temp= new Node(data);
        //step 2- in next(pointer) of new node store the memory location of next node(head)
        temp ->next= head;
        //step 3- now update head(first node) ans new node
        head = temp;
    }    
}

int main()
{
    // 
    Node* head = new Node(10);  // head is pointer and stores address this 
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    
    // head is the first or left most list 
    print(head);  //50 40 30 20 10
}