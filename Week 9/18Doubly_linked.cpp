#include<iostream>
using namespace std;

// creation and insertion 

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
     Node()
    {
        data=0;
        next = NULL;
        prev=NULL;
    }

    Node(int value)
    {
        data=value;
        next = NULL;
        prev=NULL;
    }
};

//recursion function 
Node* createDLL(int arr[], int index, int size,Node *back)
{
    if(index == size)
    return NULL;

    Node *temp= new Node(arr[index]);
    temp->prev=back;
    temp->next = createDLL(arr,index+1, size,temp);
    return temp;
}



int main()
{
    Node* head = NULL;
    
    int arr[]={1,2,3,4,5};
     

    // // insertionn at starting 

    // for(int i=0;i<5; i++)
    // {
    //     // insertion at starting code in a doubly linked list
    //     if(head==NULL)
    //     {
    //         head= new Node(arr[i]);
    //     }
    //     else{
    //         Node * temp= new Node(arr[i]);
    //         temp->next= head;
    //         head->prev = temp;
    //         head= temp;
    //     }
    // }
    

    // // insertion at end
    
    // Node * tail= NULL;

    // for(int i=0;i<5; i++)
    // {
    //     // insertion at ending code in a doubly linked list
    //     if(head==NULL)
    //     {
    //         head= new Node(arr[i]);
    //         tail = head;
    //     }
    //     else{
    //         while(tail->next != NULL)
    //         {
    //             tail = tail->next;
    //         }
    //         Node * temp= new Node(arr[i]);
    //         tail->next= temp;
    //         temp->prev = tail;
    //         tail= temp;
    //     }
    // }

    // creating dll using recursion 
    Node* back= NULL;
    head= createDLL(arr, 0,5,back);


    // printing llist

    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    return 0;
}