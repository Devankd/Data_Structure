#include<iostream>
using namespace std;
// Deleting a particular node of linked list(non empty list)
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
    
        // if only one node is present
        if(x== 1)
        {
            Node* temp= Head;
            Head = Head->next;
            delete  temp;
        }// if more than one node is present
        else
        {
            Node *curr=Head;
            Node *prev = NULL; // prev of curr is Null because here curr is head ie. first node so before first node there is null   
            x--;
            while(x--)
            {
               prev= curr;
               curr= curr->next;
            }
            prev->next=curr->next;
            delete curr;
        }


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
