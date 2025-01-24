#include<iostream>
using namespace std;
// Deleting Last nodeof linked list
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
    if(Head != NULL)
    {
        // if only one node is present
        if(Head ->next == NULL)
        {
            Node* temp= Head;
            delete  temp;
            Head = NULL;
        }
        else
        {
            Node *curr=Head;
            Node *prev = NULL; // prev of curr is Null because here curr is head ie. first node so before first node there is null   
            while(curr->next != NULL)
            {

               prev= curr;
               curr= curr->next;
            }

            delete curr;
            prev->next=NULL;
        }


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




//alternate way 

// #include<iostream>
// using namespace std;
// // Deleting Last nodeof linked list
// class Node
// {
//     public:
//     int data;
//     Node *next;
    
//     Node(int data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }
// };

// int main()
// {
//     // creating a linked list
//     int arr[]= {2,4,6,8,10};
//     Node* Head = NULL;
//     Node* Tail= Head;
//     for(int i=0;i<5; i++)
//     {   // if linked list is empty
//         if(Head== NULL)
//         {
//             Head= new Node(arr[i]);
//             Tail = Head;
//         }//
//         else
//         {
//             while(Tail->next != NULL)
//             {
//                 Tail=Tail->next;
//             }
//             Tail->next = new Node(arr[i]);
//         }
//     }
//     //deleting last node
//     Node *curr=Head;
//     if(Head==NULL){}
//     else if(Head->next== NULL)
//     {
//         Node* temp1 = Head;  // stiring first node to be deleted into temp to delete it otherwise it will make memory wastage
//         Head= Head->next;
//         delete temp1;
//     }
//     else{
//         while(curr->next->next != NULL)
//         { curr=curr->next;}
//         Node* temp=curr->next;
//         curr->next=NULL;
//         delete temp;
//     }
//     // printing
//     Node* temp1=Head;
//     while(temp1)
//     {
//         cout<<temp1->data<<" ";
//         temp1=temp1->next;
//     }
// }
