#include<iostream>
using namespace std;

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
    // printing
    Node* temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
