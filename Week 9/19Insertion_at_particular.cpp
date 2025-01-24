#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }

};



int main()
{
    
    int pos=1;

    Node* head = new Node(4);

    // insertion at particul at particular position 
    //edge cases - at start and at end
    // normal case- insert an any position in middle

    //insert at start
    if(pos==0)
    {
        // if LinkedList doesn't exist
        if(head==NULL)
        {
            head = new Node(5);
        }
        //if exists
        else{
            Node* temp = new Node(5);
            temp ->next = head;
            head->prev = temp;
            head=temp;
        }
    }
    else{
        Node* curr = head;
        while(--pos)
        {
            curr = curr->next;
        }
        //insert at end
        if(curr->next ==NULL) // last Node
        {
            Node* temp =new Node(5);
            temp->prev = curr;
            curr->next = temp;
        }
        // Insert at middle
        else{
            Node *temp = new Node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }

    }
    

    // printing 
    Node * temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp ->next;
    } 
    return 0;
}