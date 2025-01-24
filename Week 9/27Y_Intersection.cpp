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
    Node* intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        //second way
        Node* curr1= head1;
        
        while(curr1->next)
        {
            curr1=curr1->next;
        }
        curr1->next=head1;
        Node *fast= head2, *slow= head2;
        //detect loop
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(fast==slow)break;
        }
        if(!(fast&&fast->next))return NULL;
        // find where loop start
        slow=head2;
        while(slow!=fast)
        {
            slow= slow->next;
            fast= fast->next;
        }
        return slow;
        
        
        
        //first way
        
        // Node* curr1= head1, *curr2= head2;
        // // count length of both lists
        // int count1=0, count2=0;
        // while(curr1)
        // {
        //     count1++;
        //     curr1= curr1->next;
        // }
        // while(curr2)
        // {
        //     count2++;
        //     curr2=curr2->next;
        // }
        // // traverse curr1 or curr2 to make length equal
        // curr1=head1, curr2=head2;
        // while(count1>count2)
        // {
        //     curr1=curr1->next;
        //     count1--;
        // }
        // while(count1<count2)
        // {
        //     curr2=curr2->next;
        //     count2--;
        // }
        // // when curr1 and curr2 become equal move out of loop and return that node
        // while(curr1!=curr2)
        // {
        //     curr1=curr1->next;
        //     curr2=curr2->next;
        //     if(!curr1 || !curr2) // if loop doesnot exist 
        //     {
        //         return NULL;
        //     }
        // }
        // return curr1;
        
    }
};