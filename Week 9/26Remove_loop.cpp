//Remove loop in linked list - GFG (singly linkedlist)
//disconnect lastnode from the first node of list 
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        // just remove the loop without losing any nodes
        
    // 2nd way
        Node* slow=head;
        Node* fast = head;
        //detect loop
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(slow==fast)break;
        }
        // retrun if no loop  is present
        if(!(fast&&fast->next)) return;
        // now slow and fast are at saame place
        int count=1 ;// number of nodes in loop
        slow = fast->next;
        while(slow!=fast)
        {
            count++;
            slow = slow->next;
        }
       
       slow =head, fast=head;
       // taking fast count number of nodes ahead of slow
       while(count--)
       {
           fast= fast->next;
       }
       // now where loop starts fast and slow will become equal
       while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        // going to last node of loop and making them null
        while(fast->next != slow)
        {
            fast = fast->next;
        }
        fast->next=NULL;
        
        
        //1st way
    //     Node* slow=head;
    //     Node* fast = head;
    //     //detect loop
    //     while(fast && fast->next)
    //     {
    //         fast=fast->next->next;
    //         slow=slow->next;
            
    //         if(slow==fast)break;
    //     }
    //     // retrun if no loop  is present
    //     if(!(fast&&fast->next)) return;
    //     // now slow and fast are at saame place
    //     //distance between head & node from where loop is starting and slow/fast & node from where loop is starting is equal
    //     slow=head;
    //  //   Node* prev;  //prev will store previous of fast node 
    //     while(slow!=fast)
    //     {
    //  //      prev=fast;
    //         slow = slow->next;  
    //         fast= fast->next;
    //     }
    //   //  prev->next =NULL; //here prev is last node making next of last node NULL, loop will be removed but this (prev) logic fail when first node is forming loop with last node
    //     //in loop traversing to last node and make next NULL
    //     while(fast->next!=slow)
    //     {
    //         fast=fast->next;
    //     }
    //     fast->next=NULL;
    }
};