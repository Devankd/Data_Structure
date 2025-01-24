#include<iostream>
using namespace std;

// insertion at- start, end, anywhere between
// in start
class Node
{
    public:
    int data;
    Node* Next;

    Node()
    {
       this->data=0;
       this->Next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->Next=NULL;
    }
};

int main()
{
    int arr[]={2,4,6,8,10};
    Node * head;
    head = NULL; 

    for(int i=0;i<6; i++)
    {
        if(head==NULL)  // if initially no linked list is present
        {
            head= new Node(arr[i]);
        }
        else{
            Node *temp = new Node(arr[i]);
            temp->Next= head;
            head=temp;
        }
    }
    //printing

    Node *temp = head;
    while(temp != NULL)  // or while(temp)
    {
        cout<<temp->data<<endl;
        temp= temp->Next;
    }
}