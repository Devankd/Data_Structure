#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;
    Node * prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};


//recursion function to create LinkedList
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
    int arr[]= {1,2,3,4,5};
    Node* head;
    // creating dll using recursion 
    Node* back= NULL;
    head= createDLL(arr, 0,5,back);
    
    

    // // delete at start
    
    // if(head != NULL)
    // {
    //     // if only one Node exists
    //     if(head ->next ==NULL)
    //     {
    //         delete head;
    //         head=NULL;
    //     }
    //     // if more than one Node exists
    //     else 
    //     {
    //         Node * temp = head;
    //         head = head->next;
    //         delete temp;
    //         head->prev = NULL;
    //     }
    // }


    // // delete at end

    // if(head != NULL)
    // {
    //     // if only one node exist
    //     if(head -> next == NULL)
    //     {
    //         delete head;
    //         head=NULL;
    //     }
    //     // if more than one node exists
    //     else{
    //         Node * curr = head;
    //         // going on last node
    //         while(curr->next)
    //         {
    //             curr = curr->next;
    //         }
    //         curr->prev->next= NULL;
    //         delete curr;
    //     }

    // }




    // Delete at given position 
    
    //  edge case:- delete at start & end
    //  normal :- at Middle
    
    int pos = 3;

    // delete at <start>
    if(pos==1)
    {
        // if only one Node exists
        if(head ->next ==NULL)
        {
            delete head;
            head=NULL;
        }
        // if more than one Node exists
        else 
        {
            Node * temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }

    }
    else{
        Node* curr = head;
        while(--pos)
        {
            curr= curr->next;
        }
        //delete at end
        if(curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;

        }
        else{
            curr->prev->next= curr->next;
            curr->next->prev= curr->next;
            delete curr;
        }

    }



    //printing
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }

}


