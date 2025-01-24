// Leetcode - 21
#include <iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode * next;
    ListNode * prev;
    ListNode(int val)
    {
        data= val;
        prev= NULL;
        next= NULL;
    }

};


ListNode* mergesorted(ListNode* head1, ListNode* head2 )
{
    ListNode* head =new ListNode(0);
    ListNode *tail = head;
    while( head1 && head2)
    {
        if(head1 ->data <= head2->data)
        {
            tail ->next =head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next =NULL;
        }
        else{
            tail ->next =head2;
            head2 = head2->next;
            tail = tail->next;
            tail->next =NULL;
        }
    }
    if(head1)
    {
        tail->next = head1;
    }
    else if(head2)
    {
        tail->next = head2;
    }
    return head;
}

// // inefficient way- create two pointer to traverse through both list and store in third list(head) but in this extra memory is being used 
// Node* mergesorted(Node* &head1, Node* &head2, Node* &head)
// {
    // while(head1 && head2){
    //     if(head1->data <= head2->data)
    //     {
    //         head->data= head1->data;
    //         head1= head->next;
    //     }
    //     else
    //     {
    //         head->data = head2->data;
    //         head2 =head->next;
    //     }
    // }
    // if(head1)
    // {
    //     head->next = head1;
    // }
    // else if(head2)
    // {
    //     head->next = head2;
    // }
    // return head;

//}