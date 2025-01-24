#include<iostream>
using namespace std;
// insertion at starting using recursion
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

Node* creatLinkedList(int arr[], int index, int size, Node * prev)
{
    if(index==size)
    {
        return prev;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next=prev;
    return creatLinkedList(arr, index+1,size, temp);
}

int main()
{
    int arr[]= {2,4,6,8,10};
    Node* Head =  creatLinkedList(arr, 0, 5, NULL);
    // printing
    Node* temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
