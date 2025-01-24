// GFG- Remove every Nth Node

#include <iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node* next;

};


Node* deleteK(Node* head, int k) {
        // code here
        if(k==1)
        {
            return NULL;
        }
        Node* curr=head, *prev=NULL;
        int count=1;
        while(curr)
        {
            if(k==count)  // if k==count delete current node
            {
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
                count=1;
            }
            else // else skip 
            {
                count++;
                prev=curr;
                curr= curr->next;
            }
        }
        return head;
    }