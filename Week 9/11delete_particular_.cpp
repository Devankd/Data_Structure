#include<iostream>
using namespace std;
// Deleting a particular node of linked list(given non empty list) using  recursion
class Node
{
    public:
    int data;
    Node *next;
    
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

Node* deleteNode(Node* curr, int x)
{
    if(x==1)
    {
        Node* temp = curr->next;
        delete curr;
        return temp;
    }

    curr->next= deleteNode(curr->next, x-1);
    return curr; 

}

int main()
{
    // creating a linked list
    int x=3;
    int arr[]= {2,4,6,8,10};
    Node* Head = NULL;
    Node* Tail= Head;
    for(int i=0;i<5; i++)
    {   // if linked list is empty
        if(Head== NULL)
        {
            Head= new Node(arr[i]);
            Tail = Head;
        }//
        else
        {
            while(Tail->next != NULL)
            {
                Tail=Tail->next;
            }
            Tail->next = new Node(arr[i]);
        }
    }
    //deleting last node
    
    deleteNode(Head, x);  // it will return head

    // printing
    Node* temp=Head;
    if(temp==NULL)
    {
      cout<<"Null";
    }
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
