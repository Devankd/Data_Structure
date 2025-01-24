#include<iostream>
using namespace std;
// Insert Node at any position
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

// insertion at  using recursion to create a linked list
Node* creatLinkedList(int arr[], int index, int size)
{
    if(index==size)
    {
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);

    temp->next = creatLinkedList(arr, index+1, size);
    return temp;
}

int main()
{
    int arr[]= {2,4,6,8,10};
    Node* Head =  creatLinkedList(arr, 0, 5);
    //insert at any position
    int x=3;  // to insert after 3rd position ie after 6 
    int value =30;  // 30 is to be added

    Node* temp=Head;// temp is alresry at first position so need to go only 2 position ie. x=x-1
    x--;  // 2
    while(x--)
    {
        temp=temp->next;
    }
    Node * temp2= new Node(value);
    temp2->next=temp->next;        
    temp->next=temp2;

    
    // printing
    temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
