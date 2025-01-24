// leetcode - 19

// remove nth node from end from a list

#include<iostream>
using namespace std;

class ListNode
{
    public:
    int val;
    ListNode* next;
};


ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =0;
        ListNode* temp=head;
        //counting number of nodes
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        count-=n;  // count= count-n;
        // edge case- when last node from end ie, first node is deleting
        if(count==0)   
        {
            temp=head;
            head= head->next;
            delete temp;
        }
        // all other cases
        else{
            ListNode* curr=head, *prev=NULL;
            while(count--)
            {
                prev=curr;
                curr=curr->next;
            }
            //now curr is on node which need to be deleted
            prev->next=curr->next;
            delete curr;
        }
        return head;
}