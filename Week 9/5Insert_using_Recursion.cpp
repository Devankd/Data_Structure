#include<iostream>
using namespace std;
// insertion at end using recursion>
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
    // printing
    Node* temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
